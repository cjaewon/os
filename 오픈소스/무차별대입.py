import pyautogui
import time
import random
import jwngraphics.h  #jwngrapic ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅁㅊ
time.sleep(10)
b = 0
for i in range(250):
        pyautogui.press('backenter')
        pyautogui.press('backenter')
        pyautogui.press('backenter')
        pyautogui.press('backenter')
        b = random.randrange(1000,9999)
        pyautogui.typewrite(str(b))
        pyautogui.press('enter')
