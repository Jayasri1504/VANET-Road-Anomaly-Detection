# VANET-Based Road Surface Anomaly Detection & Vehicle Health Monitoring

## 📌 Overview
This project presents a prototype system for detecting road surface anomalies (such as potholes and obstacles) and alerting nearby vehicles using wireless communication. The system simulates Vehicle-to-Vehicle (V2V) communication using RF modules and includes a mobile vehicle prototype for real-time testing.


## 🚨 Problem Statement
Road accidents often occur due to poor road conditions like potholes, cracks, and lack of communication between vehicles. There is no real-time alert system to warn nearby vehicles.

## 💡 Proposed Solution
A sensor-based embedded system that detects road anomalies and transmits alerts wirelessly using RF communication. A receiver module integrated with a vehicle prototype receives the alert and notifies the driver.


## 🧩 System Architecture

### 🔹 Transmitter Unit
- Detects road anomalies using sensors  
- Processes data using Arduino  
- Sends alert signals using RF transmitter  
- Displays status on LCD and buzzer  

### 🔹 Receiver Unit (Vehicle Prototype)
- Receives RF signals from transmitter  
- Processes alert using Arduino  
- Displays warning on LCD and buzzer  
- Controls movement using motor driver and wheels  
- Uses Bluetooth module for manual control and testing  


## ⚙️ Components Used
- Arduino (Microcontroller)
- Sensors (for anomaly detection)
- RF Module (Transmitter & Receiver)
- Bluetooth Module
- Motor Driver
- LCD Display
- Buzzer
- Power Supply (Battery)

## 🔄 Working Principle
1. Sensor detects road anomaly  
2. Arduino processes the input signal  
3. RF transmitter sends alert signal  
4. RF receiver receives the signal in vehicle unit  
5. Arduino triggers buzzer and LCD alert  
6. Bluetooth is used to control vehicle movement for testing  

## 🚗 Mobility & Control
The prototype includes a Bluetooth-based control system:
- Enables movement of the vehicle (forward, reverse, etc.)
- Helps simulate real-time driving conditions
- Used for testing system performance dynamically


## 💻 Code Structure
- Transmitter Code: Handles sensor input and sends RF signals  
- Receiver Code: Receives RF signals and triggers alerts  
- Bluetooth Code: Controls movement of the prototype vehicle  

## 👩‍💻 My Contribution
- Worked on system logic and intergration of components 
- Assisted in sensor integration  
- Contributed to testing and validation  
- Helped in communication setup between modules
- All documentatons


## 🚀 Future Improvements
- Replace RF with 5G/Bluetooth for real-world communication  
- Improve detection accuracy using advanced sensors  
- Integrate GPS for location tracking  


## 📌 Conclusion
This project demonstrates a low-cost prototype solution for improving road safety using embedded systems and wireless communication.

---
