# Project : Park assist

## Description: Unsuccessful parking attempts are frustrating. The Park assist gets drivers into any suitable parking space. The two ultra sonic sensors placed at the rear side of the car scan the sides of the road and warns the driver if any object is too close. 

----------------------------------------------------------
## Component Description

### Power Supply:
- External source of power supply that powers all devices, switches and microcontroller

### Microcontroller:
- Performs all operations required by our system. Takes input the signals which the ultrasonic sensor receives and processes them to find the presence of object.

### Ultra Sonic Sensor
- Ultrasonic sensor HC-SR04 is used here to detect the presence of an object while parking. The sensor module consists of ultrasonic transmitter, receiver and the control circuit. Ultrasonic Sensor consists of two circular eyes out of which one is used to transmit the ultrasonic wave and the other to receive it.

###  LCD
- Alerts when the sensor detects presence of any object while parking the car.
-----------------------------------------------------------

## High Level Requirements
- To detect the presence of object while parking the car.
- To alert the driver using LCD when any obstacle is within the range of senor.

## Low Level Requirements
- Interface HC-SR04( Ultrasonic Sensor) with Arduino UNO.
- Interface LCD with Arduino UNO.
- To give an alert after the task is completed.
------------------------------------------------------------
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
- Easy setup that can be used in any vehicle.

### Threats:
- Other Sensors with greater efficiency can replace this.
- Many other similar application are available.
-------------------------------------------------------------

# 4W's & 1H

### Who
- Any user using four wheeler vehicle where visibility of the rear side is less.

### What
- This is a Utility application to sense the obstacles in the rear side while parking the vehicle and alert the driver.

### When 
-  Can be used while parking.

### Where
- User can belong to any background who can use this utility to ensure safety while parking the vehicle to avoid collision.

### How
- Developed using Arduino UNO and implemented on SimulIDE.
