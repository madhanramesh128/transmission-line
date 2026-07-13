**# 🔥 Fire and Gas Detection System using Arduino

A simple Arduino-based safety system that detects **fire** and **gas leakage** using a Flame Sensor and MQ Gas Sensor. The system displays real-time status on a **16x2 LCD** and activates an **LED alert** whenever danger is detected.

---

## 📌 Features

- 🔥 Fire Detection using Flame Sensor
- 💨 Gas Leakage Detection using MQ Gas Sensor
- 📟 Real-time status displayed on 16x2 LCD
- 💡 LED alert for emergency indication
- ⚡ Simple Arduino-based implementation

---

## 🛠 Components Used

- Arduino UNO
- Flame Sensor
- MQ Gas Sensor
- 16x2 LCD Display
- LED
- 220Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

---

## 🔌 Circuit Connections

| Component | Arduino Pin |
|-----------|-------------|
| LCD RS | D13 |
| LCD EN | D12 |
| LCD D4 | D11 |
| LCD D5 | D10 |
| LCD D6 | D9 |
| LCD D7 | D8 |
| Flame Sensor | D7 |
| MQ Gas Sensor | A0 |
| LED | D6 |

---

## ⚙️ Working Principle

### Safe Condition
- No flame detected.
- Gas value below threshold.
- LCD displays:
```

SAFE CONDITION
SYSTEM NORMAL

```

### Fire Detection
- Flame sensor detects fire.
- LED turns ON.
- LCD displays:
```

FIRE ALERT!
FLAME DETECTED

```

### Gas Leakage
- MQ sensor value exceeds threshold.
- LED turns ON.
- LCD displays:
```

GAS DETECTED
ALERT WARNING

```

---

## 📂 Project Structure

```

Fire-Gas-Detection-System/
│
├── Fire_Gas_Detection.ino
├── README.md
├── LICENSE
└── images/
├── circuit.jpg
├── hardware.jpg
└── demo.gif

```

---

## 🚀 How to Run

1. Connect all components according to the circuit.
2. Open `Fire_Gas_Detection.ino` in Arduino IDE.
3. Select:
   - Board: Arduino UNO
   - Correct COM Port
4. Upload the code.
5. Open Serial Monitor at **9600 baud**.
6. Test the flame sensor and MQ gas sensor.

---

## 📷 Project Images

Add your project images inside the `images` folder.

Example:

- Circuit Diagram
- Hardware Setup
- LCD Output
- Demo GIF

---

## 👨‍💻 Author

**Madhan Ramesh**

B.E. Electronics and Communication Engineering

Velalar College of Engineering and Technology

---

## 📜 License

This project is open-source and available under the MIT License.**
