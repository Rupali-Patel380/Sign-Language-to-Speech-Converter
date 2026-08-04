# 🤟 Sign Language to Speech Conversion

<p align="center">

🚀 **A Gesture-Based Speech Conversion System using Arduino, Flex Sensors & DFPlayer Mini**

**Detect Hand Gestures | Recognize Signs | Convert Gestures into Speech**

</p>

---

## 📖 Project Overview

The **Sign Language to Speech Conversion** project is an assistive technology system designed to help reduce the communication gap between people who use sign language and those who may not understand it.

The system uses **flex sensors** to detect finger bending and hand gestures. The sensor values are read by an **Arduino microcontroller** and processed according to predefined gesture conditions.

Based on the detected gesture, the corresponding audio file is played through a **DFPlayer Mini** and speaker, allowing the gesture to be converted into audible speech.

---

## 🎓 Project Details

- **Domain:** Embedded Systems | Arduino | Assistive Technology
- **Project Type:** Hardware-Based Gesture Recognition System
- **Platform:** Arduino

---

## ✨ Features

- Real-time hand gesture detection
- Flex sensor-based finger movement detection
- Gesture-based speech conversion
- Pre-recorded voice output
- Arduino-based embedded system
- DFPlayer Mini audio playback
- Speaker-based voice output
- Simple and low-cost implementation

---

## 🛠 Hardware Components

| Component | Quantity |
|-----------|----------|
| Arduino Nano | 1 |
| Flex Sensors | 5 |
| DFPlayer Mini | 1 |
| Speaker | 1 |
| Zero PCB | 1 |
| Jumper Wires | As Required |
| MicroSD Card | 1 |

---

## 💻 Software & Technologies

- Arduino IDE
- Embedded C / Arduino C++
- Arduino Nano
- Flex Sensor Interfacing
- DFPlayer Mini
- UART / Serial Communication

---

## ⚙️ Working Principle

### Step 1: Hand Gesture

The user performs a predefined sign language gesture using their hand.

⬇️

### Step 2: Flex Sensor Detection

The **flex sensors** detect the bending of the fingers. The resistance of each sensor changes according to the amount of bending.

⬇️

### Step 3: Data Processing

The Arduino reads the sensor values through its analog input pins and compares the readings with predefined conditions.

⬇️

### Step 4: Gesture Recognition

The combination of flex sensor readings is used to identify the corresponding hand gesture.

⬇️

### Step 5: Audio Selection

Once a gesture is recognized, the Arduino sends a command to the **DFPlayer Mini** to select the corresponding audio file stored on the MicroSD card.

⬇️

### Step 6: Speech Output

The selected audio file is played through the connected **speaker**, converting the recognized sign into audible speech.

---

## 🔄 System Flow

**Hand Gesture**

↓

**Flex Sensors**

↓

**Arduino Nano**

↓

**Gesture Recognition**

↓

**DFPlayer Mini**

↓

**Speaker**

↓

**Speech Output**

---

## 🔌 Circuit Connections

### Flex Sensors

The flex sensors are connected to the analog input pins of the Arduino to measure changes in resistance caused by finger bending.

### DFPlayer Mini

The DFPlayer Mini communicates with the Arduino using serial communication and plays the corresponding audio file stored on the MicroSD card.

### Speaker

The speaker is connected to the DFPlayer Mini to produce the final audio output.

---

## 📸 Project Setup

<p align="center">
  <img width="207" height="303" alt="Screenshot 2026-08-04 195713" src="https://github.com/user-attachments/assets/8ad4863e-9d9d-4222-99d0-cb7da6442367" />


</p>

---

## 📂 Project Structure

```text
Sign-Language-to-Speech-Conversion
│
├── Arduino_Code
│   └── SignLanguageToSpeech.ino
│
├── Audio
│   ├── 0001.mp3
│   ├── 0002.mp3
│   └── 0003.mp3
│
├── Images
│   ├── project_setup.jpg
│   ├── circuit_diagram.png
│   └── output.jpg
│
└── README.md
