import pyautogui
import time
import random
time.sleep(10)
b = 250
for i in range(250):
        pyautogui.press('backenter')
        pyautogui.press('backenter')
        pyautogui.press('backenter')
        pyautogui.press('backenter')
        time.sleep(0.3)
        b = b - 1
        pyautogui.typewrite(str(b))
        pyautogui.press('enter')



        

