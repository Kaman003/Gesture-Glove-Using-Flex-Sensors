# Gesture Glove Using Flex Sensors

## Introduction
This project focuses on a gesture-controlled glove that uses flex sensors to recognize hand movements and convert them into text and sound using an Arduino-based system. The glove is particularly useful for non-verbal communication and assistive technologies.

## Features
- Recognizes predefined hand gestures.  
- Displays corresponding text output on an LCD screen.  
- Provides audio feedback using a buzzer.  
- Customizable for different gesture-based applications.  

## Components Used
- Arduino UNO  
- Flex Sensors  
- 16x2 LCD Display  
- Potentiometer  
- Buzzer    

## Applications  
- Assistive technology for people with speech disabilities.  
- Smart home control using hand gestures.  
- Gaming & VR interaction.  
- Industrial machinery control.  

## Future Improvements  
- Wireless communication using Bluetooth/WiFi.  
- More gestures for expanded functionality.  
- Integration with AI for gesture learning.  

## How to Use  
1. **Wear the glove** and bend fingers to form gestures.  
2. **The LCD displays** the recognized action.  
3. **The buzzer beeps** for audio feedback.  

## Code  

```cpp
#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int speakerPin = 9;

void setup() {
    pinMode(A0, INPUT);
    lcd.begin(16, 2);
}

void loop() {
    int thumb = analogRead(A0);
    if (thumb >= 30 && thumb <= 40) {
        lcd.print("TEA");
    }
}
