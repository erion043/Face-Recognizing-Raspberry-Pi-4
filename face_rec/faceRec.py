import face_recognition
import cv2
import numpy as np
import glob
import shelve
import os

class Face:
    def __init__(self, id:int, name:str, encoding:np.ndarray, image:np.ndarray):
        self.id = id
        self.name = name
        self.encoding = encoding
        self.image = image

stored_encodings = []

file_path = 'faces'

if glob.glob(os.path.join('.', 'faces.*')) == []:
    with shelve.open(file_path, flag='c') as db:
        pass
else:
    with shelve.open(file_path) as db:
        for key in db:
            stored_encodings.append(db[key].encoding)

framecount = 0

def index_of_first_true(list: list[bool]) -> int: 
    for i, is_true in enumerate(list):
        if is_true:
            return i
    return -1

camera = cv2.VideoCapture(0)

#Main program loop
while True:
    ret, frame = camera.read()
    if framecount == 4:
        
        #Resizing for optimization
        small_frame = cv2.resize(frame, (0, 0), fx=0.25, fy=0.25)
        rgb_small_frame = small_frame[:, :, ::-1]

        #Recognizing faces in the frame
        face_locations = face_recognition.face_locations(rgb_small_frame)
        face_encodings = face_recognition.face_encodings(small_frame, face_locations)

        #Comparing each face in the frame against the stored faces
        if face_encodings != []:
            
            for index, face in enumerate(face_encodings):
                comparison = face_recognition.compare_faces(stored_encodings,face)

                true_pos = index_of_first_true(comparison)
                
                if true_pos != -1:
                    with shelve.open(file_path) as db:
                        print(str(db[str(true_pos)].id) + '. ' + db[str(true_pos)].name)
                else:
                    #crop image
                    top, right, bottom, left = face_locations[index]
                    face_image = small_frame[top:bottom, left:right]

                    face_object = Face(len(stored_encodings), 'Unknown', face, face_image)
                    stored_encodings.append(face)
                    with shelve.open(file_path, flag='c') as db:
                        db[str(face_object.id)] = face_object
                        print('Face added')

        
        framecount = 0

    cv2.imshow('Video', frame)
    framecount += 1


    if cv2.waitKey(1) & 0xFF == ord('q'):
        break