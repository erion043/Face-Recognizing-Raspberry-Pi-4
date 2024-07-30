import shelve
import cv2
import numpy as np

class Face:
    def __init__(self, id:int, name:str, encoding:np.ndarray, image:np.ndarray):
        self.id = id
        self.name = name
        self.encoding = encoding
        self.image = image


num = input('Which face would you see?: ')

with shelve.open('faces') as db:
    face_instance = db[str(num)]
        
    cv2.imshow(str(face_instance.id), face_instance.image)
    cv2.waitKey(0)

    bruh = input('Do you want to name the person? (1 for yes): ')


    if bruh == '1':
        name = input('Enter name: ')
        face_instance.name = name
        db[str(num)] = face_instance
        


cv2.destroyAllWindows()