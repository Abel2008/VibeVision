import cv2
from PIL import Image
from pytesseract import pytesseract

camera = cv2.VideoCapture(0)


def tesseract():
    path_to_tesseract = r"C:\Program Files\Tesseract-OCR\tesseract.exe"
    image_path = "test1.jpg"
    pytesseract.tesseract_cmd = path_to_tesseract
    image = cv2.imread(image_path)
    try:
        text = pytesseract.image_to_string(image)
        print(text)
    except Exception as e:
        print(f"An error occurred: {e}")


while True:
    _, image = camera.read()
    cv2.imshow('image', image)
    if cv2.waitKey(1) & 0xFF == ord('s'):
        cv2.imwrite('test1.jpg', image)
        break
camera.release()
tesseract()

cv2.destroyAllWindows()