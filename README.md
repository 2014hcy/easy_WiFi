# easy_WiFi - the WiFi lib for the ESP32 beginner

It's can helps the __ESP32__ beginner to __using "WiFi"__ lib. It's using my ***"myOLED"*** lib.

## Install

1. **Install** the **[Arduino IDE](https://github.com/arduino/arduino-ide/releases)** or **[Arduino CLI](https://github.com/arduino/arduino-cli/releases)**.
2. **Install** ***"esp32"*** boards in the **Arduino IDE** or **Arduino CLI**. ***(China mirrors: https://arduino.me/packages/esp32.json)***
3. **Install** **[easy_WiFi](https://github.com/2014hcy/easy_WiFi/archive/refs/heads/main.zip)**.
4. **Extract** zip file to your folder.
5. **Use** my ***easy_WiFi*** lib to makes a **perfect works**!

## Instructions

***"connect()"*** function is for __connect your WiFi__, __*ssid*__ is your __WiFi name__ , __*password*__ is your __WiFi password__ and __*oled_addr*__ is your __*OLED I2C address*__.<br>
***"init_time()"*** function can __init the time zone__. It's have __3 country__ to choose: __1. ZH(China) 2. US(America) 3. UK(United Kingdom).__<br>
***"write_time()"*** function can __display time__ one times on the OLED.<br>
***"printLocalTime()*** function is for __display time__ on the __OLED__ __*one times*__. __"doDisplay"__ is for __control displaying or not__.
