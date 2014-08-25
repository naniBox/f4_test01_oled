@set PATH=%PATH%;"C:\Program Files (x86)\SEGGER\JLinkARM_V470a\"
c:
cd "c:\ChibiStudio\workspace\f4_test01_oled\"
jlink -CommanderScript FLASH_f4_test01_oled.jlink
pause
