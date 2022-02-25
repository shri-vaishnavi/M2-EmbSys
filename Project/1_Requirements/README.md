
### Project : Door Alarm To Ensure Security.

### Description:For all of us, security has always been a key issue. This microcontroller-controlled door alarm uses an ultrasonic sensor that can be placed near the door to determine whether or not someone is there. The buzzer starts buzzing whenever someone enters the range of the ultrasonic sensor. The detecting range of the sensor can be modified depending on the door. This is also capable of acting as a motion detector.

----------------------------------------------------------
## Component Description

### Power Supply:
- External source of power supply that powers all devices, switches and microcontroller

### Microcontroller:
- Performs all operations required by our system. Takes input the signals which the ultrasonic sensor receives and processes them to find the distance between the object and the sensor.

### Ultra Sonic Sensor
- Ultrasonic sensor HC-SR04 is used here to detect the presences of any person at the door. The sensor module consists of ultrasonic transmitter, receiver and the control circuit. Ultrasonic Sensor consists of two circular eyes out of which one is used to transmit the ultrasonic wave and the other to receive it.

### Buzzer
- Alerts when the sensor detects presence of someone at the door.

## High Level Requirements
- To detect the presence of anyone standing within the range on sensor
- To turn on the alarm when the distance between the ultrasonic sensor and the person is very less.

## Low Level Requirements
- Interface HC-SR04( Ultrasonic Sensor) with Atemega8.
- Interface Buzzer with Atmega8.
- To give an alert after the task is completed.

## SWOT

### Strengths:                                                                        
- Easy to understand and use.
- Range for the ultra sonic sensors can be adjusted according to user.
- Can be used in dark environment.
- Least affected by dust, dirt and moisture environment.

### Weakness:
- Sensing accuracy affected by changes in temperature of 5-10 degrees or more.
- Objects covered in a very soft fabric absorb more sound waves making it hard for the sensor to see the target.

### Opportunities:
- Can be used by every household to ensure security.
- Can also be installed for lockers.

### Threats:
-  Other Sensors with greater efficiency can replace this.
- Many other similar application are available.
--------------------------------------

# 4W's & 1H

### Who
- A user who wants to ensure security to their home. This system can also be used for locker set up inside their house.

### What
- This is a Utility application to sense someone s presence near the door by alerting through a buzzer.

### When 
-  Can be used near the door to sense someone's presence.

### Where
- User can belong to any background who can use this utility to ensure security to his house.

### How
- Developed using C Language and implemented on SimulIDE.
