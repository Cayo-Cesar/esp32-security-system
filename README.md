# ESP32 - Security System with Alarm

## Description
This project implements a **security system with alarm** using an ESP32. The system monitors the environment with a PIR sensor and, upon detecting movement, triggers a **buzzer**, a **red LED**, and displays an alert on the **0.96" OLED display**. Optionally, it can send notifications to Telegram.

## Components Used
- **ESP32** (main microcontroller)
- **PIR Sensor** (motion detection)
- **Buzzer** (sound alarm)
- **Red LED** (visual indication)
- **0.96" OLED Display** (system alerts and messages)

## How It Works
1. The system starts and displays "System Ready" on the OLED display.
2. The PIR sensor monitors the environment.
3. When the PIR detects movement:
   - The **buzzer** is activated.
   - The **red LED** turns on.
   - "Motion Detected!" is displayed on the **OLED display**.
   - (Optional) A **message is sent to Telegram**.
4. After a few seconds, the system returns to standby mode.

## How to Run the Project
1. Clone this repository:
   ```sh
   git clone https://github.com/your-username/esp32-security-system.git
   ```
2. Install the necessary libraries in Arduino IDE or PlatformIO:
  - Adafruit_GFX
  - Adafruit_SSD1306
  - WiFi (for Telegram notifications, if enabled)
3. Upload the code to the ESP32.
4. Connect the components according to the wiring diagram.
5. Power on the ESP32 and monitor its operation!

## Wiring Diagram

Pending ....

## Telegram Notification (Optional)
To receive alerts on Telegram, follow these steps:
1. Create a bot on Telegram using BotFather.
2. Get the Bot Token and Chat ID.
3. Configure these credentials in the source code.
4. Enable the notification option in the code.
