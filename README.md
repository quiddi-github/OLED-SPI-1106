# Arduino mit OLED Display, SSD1106 SPI


Stand: 26.8.2023

26.8.2023\
Dies ist ein Beispielprogramm von Adafruit für die Ansteuerung eines OLED Displays an einem Arduino Nano. Wichtig ist, dass es sich bei der Ansteuerung um ein OLED Display mit dem SSD1106 Kontroller handelt. Dieser Kontroller unterstützt nur SPI, kein I2C Bus. Der SSD1306 Kontroller hingegen unterstützt auch den I2C Bus. Um diesen geht es hier aber nicht. Ein Schaltplan zum Anschluss des OLED-Displays ist beigefügt als PDF. Ein jpg-Bild ist auch beigefügt. Das OLED Display hat 128x64 Pixel und hat eine Diagonale von 1,3".\
Elektronisch wird der Arduino und das OLED SSD1106 wie folgt angebunden über SPI:\
Arduino - - - OLED\
5V    ---     VDD, VCC (kann auch 3,3V sein, bitte aufpassen) \
GND   ---     GND\
10    ---     SCK, CLK\
9     ---     SDA, MOSI\
13    ---     Res\
11    ---     DC\
12    ---     CD