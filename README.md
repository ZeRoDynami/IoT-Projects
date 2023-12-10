# IoT-Projects
My initial projects
# 1. Introduction to Arduino-based Line Following Robot:

In the world of robotics, line following robots are fascinating creations that demonstrate the integration of sensors, actuators, and programming to navigate a predefined path. These robots are particularly popular for educational purposes and competitions due to their simplicity and practical application. In this project, we will explore the development of a line following robot using the Arduino platform.<br>

Background:<br>
Line following robots are designed to autonomously follow a path marked by a contrasting line, usually a black line on a white surface or vice versa. The robot utilizes sensors to detect the line and adjusts its movements accordingly to stay on track. This type of robotics project introduces enthusiasts and learners to fundamental concepts in robotics, such as sensor integration, feedback control, and programming.<br>

Objective:<br>
The primary objective of this project is to create a functional line following robot using an Arduino microcontroller. By implementing sensors that can detect the contrast between the line and the surface, the robot will be programmed to make decisions based on this input, enabling it to follow the specified path autonomously.<br>
![image](https://github.com/ZeRoDynami/IoT-Projects/assets/70834306/180bf7c4-a28c-41a0-b88d-10908704cebe)

Components Needed:<br>
Arduino Board: The brain of the robot, responsible for processing sensor data and controlling the motors.
Infrared (IR) Sensors: These sensors are used to detect the line on the surface.
Motor Driver: To control the motors that drive the robot's movement.
DC Motors and Wheels: These components enable the robot to move in the desired direction.
Chassis: The physical structure of the robot where all components are mounted.
Power Supply: Typically a battery to power the Arduino and motors.<br>

![IMG_20180206_143715](https://github.com/ZeRoDynami/IoT-Projects/assets/70834306/05a7e0e8-8f9c-41ab-8ce5-01fd493ea4c9)
Demo v1<br>



https://github.com/ZeRoDynami/IoT-Projects/assets/70834306/3125d794-01d4-46bc-a5c5-14dca235761b


Demo v2<br>
Improved and integrated infrared light detected robot.<br>
![image](https://github.com/ZeRoDynami/IoT-Projects/assets/70834306/2f2715ab-eb5d-4196-9285-3802b3d4c376)




https://github.com/ZeRoDynami/IoT-Projects/assets/70834306/29968266-3415-45bb-9dd1-f6e43336ff4b

# 2. RFID 
Creating an RFID locked door system using Arduino involves integrating RFID (Radio-Frequency Identification) modules to read RFID cards or tags and controlling a locking mechanism based on the verification of the RFID data. <br>
![image](https://github.com/ZeRoDynami/IoT-Projects/assets/70834306/1e542955-63dc-4344-9964-381d11fdcfad)

The RFID module is initialized, and SPI communication is set up.
The isAuthorizedCard function compares the UID of the detected card with the UID of an authorized card. Replace the authorizedUID array with the UID of the card you want to authorize.
If the card is authorized, the unlockDoor function is called to unlock the door by opening the servo motor. The status LED is also turned on.
After a delay (5 seconds in this example), the lockDoor function is called to close the door and lock it. The status LED is turned off.

# 3.  Passive Infrared (PIR) sensors lighting
Passive Infrared (PIR) sensors are widely used in electronic projects to detect motion by capturing changes in infrared radiation in their field of view. When integrated with an Arduino, a PIR sensor can be a valuable component for creating interactive and responsive projects. In this introduction, we'll explore the basics of interfacing an Arduino with a PIR sensor and provide a simple example code to get you started.<br>

Background:<br>
PIR sensors are "passive" because they don't emit energy but instead detect infrared radiation emitted or reflected by objects in their surroundings. They are commonly employed in security systems, lighting control, and automation applications.<br>

Objective:<br>
The goal of this project is to interface a PIR sensor with an Arduino and create a simple motion detection system. When motion is detected, the Arduino will respond with a predefined action, such as turning on a light, activating an alarm, or triggering any other user-defined behavior.<br>
![IMG_20180217_132023](https://github.com/ZeRoDynami/IoT-Projects/assets/70834306/7eb400cc-e2cc-49c5-a295-e513d2d05a67)

Components Needed:<br>
Arduino Board: The central processing unit for your project.
PIR Sensor: Detects motion by sensing changes in infrared radiation.
Jumper Wires: Connect the components on the breadboard.
Optional Output Components: LEDs, buzzers, or any other output devices for indicating motion detection.

![image](https://github.com/ZeRoDynami/IoT-Projects/assets/70834306/913518ea-8c8c-4505-a6ba-e68c943c5e27)

# 4. Light-Controlled Relay Using Arduino
The integration of sensors with microcontrollers, such as Arduino, enables the creation of intelligent systems capable of responding to environmental conditions. In this project, we explore the development of a light-controlled relay system using Arduino, where the activation of a relay is determined by the ambient light levels sensed by a light sensor. <br>

Background:<br>
Light-controlled systems are commonly used in various applications, including home automation, outdoor lighting, and energy conservation. By leveraging a light sensor, Arduino can be programmed to monitor the ambient light conditions and trigger a relay to control external devices, such as lights or appliances.<br>

Objective:<br>
The objective of this project is to design a system that automatically activates or deactivates an electrical load based on the amount of ambient light. In essence, the system functions as an intelligent switch, responding to changes in lighting conditions.<br>
![IMG_20180205_125341](https://github.com/ZeRoDynami/IoT-Projects/assets/70834306/98af2af1-a38b-4504-a11c-4900aeab5c70)

Components Needed:<br>
Arduino Board: The central processing unit for the project.
Light Sensor (e.g., LDR or Photoresistor): Detects the ambient light levels.
Relay Module: Controls the electrical load (e.g., a light bulb).
Jumper Wires: Connect the components on the breadboard.
Optional: External Load (e.g., Light Bulb): The device to be controlled.


