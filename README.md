# Face-Recognizing-Rasspberrry-Pi-4
An operating system and face recognizing python script that are hypothetically supposed to run together in a Raspberry Pi 4 Model B

# OS Creation & Configuration
The operating system was compiled using buildroot with the default Raspberry Pi 4 configuration provided by buildroot.

The operating system was configured with these options:

**TODO: Add them later**

# Face Recognizing Python Script
The python script is meant to be a demonstration of how the device is supposed to recognize and store the faces. It's not ported to work specifically within the OS however it should work on a device with an accesible camera and propely setup python environment.

### Using the script
In the face_rec folder there are two scripts:
1. faceRec.py
2. test.py

To store faces:
- Simply open the faceRec.py script and have a face in front of the camera.
- The script is going to automatically store it as "Unknown" with a number id which corresponds to the nth face stored by the script.

  To name faces:
  - Open the test.py script
  - Enter the face you want to name by its id. (0 if its the first face it the script recognized for example, or 1 if it's the second and so on)
  - Once the photo of the face appears, make sure to focus on the window showing it by either clickng on it or switching to it, and press Q.
  - This should then propmt you to ask if you want to give the face a name. If it already has a name it will be overwritten.
  - After pressing 1, enter the name.
  - Finally check, if the name is stored properly by running the faceRec.py script again and seeing if the name of the face on the camera appears correctly.

  ### Notes
  - You can have multiple faces in a frame
  - If you're using a picture from your phone/physical photo as an example make sure there is no glare
  - Sometimes if you move too fast while the script is running, the script might recognize you as someone else for a split second
