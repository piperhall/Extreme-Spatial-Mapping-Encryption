import mediapipe as mp
import cv2
import struct
import sys

def spatial_mapping():
    mp_face_mesh = mp.solutions.face_mesh
    face_mesh = mp_face_mesh.FaceMesh(
        static_image_mode=False,
        max_num_faces=1,
        min_detection_confidence=0.5,
        min_tracking_confidence=0.5)
    mp_drawing = mp.solutions.drawing_utils

    cap = cv2.VideoCapture(0)
    frame_counter = 0
    max_frames = 30
    byte_data = b''

    while cap.isOpened():
        success, image = cap.read()
        if not success:
            continue
        frame_counter += 1

        image.flags.writeable = False
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
        results = face_mesh.process(image)

        if results.multi_face_landmarks:
            for face_landmarks in results.multi_face_landmarks:
                for landmark in face_landmarks.landmark:
                    byte_data += struct.pack('ddd', landmark.x, landmark.y, landmark.z)

                mp_drawing.draw_landmarks(
                    image=image,
                    landmark_list=face_landmarks,
                    connections=mp_face_mesh.FACEMESH_CONTOURS,
                    landmark_drawing_spec=mp_drawing.DrawingSpec(color=(80, 110, 10), thickness=1, circle_radius=1),
                    connection_drawing_spec=mp_drawing.DrawingSpec(color=(80, 256, 121), thickness=1))

        if frame_counter >= max_frames:
            break

        cv2.imshow('MediaPipe FaceMesh', cv2.cvtColor(image, cv2.COLOR_RGB2BGR))
        if cv2.waitKey(5) & 0xFF == 27:
            break

    cap.release()
    cv2.destroyAllWindows()
    sys.stdout.buffer.write(byte_data)
    return byte_data

if __name__ == "__main__":
    print(spatial_mapping())
