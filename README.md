# Smart Glove-Based Communication System

![Project Image](images/glove-setup.jpg)

## 🔍 Overview

This project implements a **smart glove-based system** that detects finger movements using **flex sensors** and translates them into predefined commands displayed on an **LCD screen**. It also generates audio feedback through a buzzer.

## 🛠️ Technologies Used

- **Arduino Uno**  
- **Flex Sensors** (5 – one for each finger)  
- **Liquid Crystal Display (LCD) 16x2**  
- **Buzzer** (for feedback)  
- **Jumper Wires, Resistors, Breadboard** 
this is for trial

## 📷 Circuit Diagram  

![Circuit Diagram](images/circuit-diagram.jpg)

## 🚀 Features  

- Detects finger movements using **flex sensors**.  
- Displays corresponding messages like **"TEA", "COFFEE", "NEWSPAPER", etc.** on an LCD.  
- Generates a **beep sound** for feedback.  
- Uses **Serial Monitor** to debug sensor values.  

## 🛠️ Installation  

1. Install **Arduino IDE** ([Download here](https://www.arduino.cc/en/software)).  
2. Connect the **Arduino Uno** to your computer via USB.  
3. Download this repository and open `code/main.ino` in the Arduino IDE.  
4. Upload the code to the Arduino.  
5. Power the Arduino and test the glove functionality.  

## 📜 Code Explanation  

The `main.ino` file reads **analog sensor values** from **A0 to A4** (thumb to little finger). Based on preset value ranges, it displays text messages and beeps.  

```cpp
void loop() {
    a = analogRead(A0); // thumb sensor
    if (a >= 30 && a <= 40) {
        Serial.println("TEA");
        lcd.print("TEA");
        beep();
    }
    delay(250);
}
```

The `beep()` function generates a **1000Hz sound** for **100ms** using `tone()` function.

## 🛠️ Future Enhancements  

- Add **Bluetooth/Wi-Fi** to send messages wirelessly.  
- Implement **Machine Learning** for better gesture recognition.  
- Use **Text-to-Speech** for spoken output.  

## 📄 License  

This project is licensed under the **MIT License**.

---

## 📢 Contribution  

1. Fork the repository.  
2. Create a new branch (`git checkout -b feature-xyz`).  
3. Commit changes (`git commit -m 'Added new feature'`).  
4. Push to the branch (`git push origin feature-xyz`).  
5. Open a **Pull Request**.  

---

## 🔗 Contact  

For queries, reach out via **Email** or **GitHub Issues**.
