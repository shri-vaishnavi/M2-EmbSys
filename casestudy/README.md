# M2-EmbSys
## Case Study : Refrigerator
### Refrigerator takes real time input of temperature from the freezer and makes decision in order to maintain the temperature in the particular range. The door sensor senses the position of the door in order. LED's turn ON if the dorr is open and turns OFF if the door is closed.
![Capture](https://user-images.githubusercontent.com/98872514/154813891-ad1ec751-9885-4906-83cf-56c80d7879e7.PNG)

----------------------------------------------------------
# Component Description
## Power Supply
- To power all the components, an external power supply is used.

## Switch Buttons
- To either power the system or isolate the system, switches are used.

## LED’s
- LED's act as a mean to communication with the user

## Microcontroller
- Performs all operations required by our system. Takes temperature as input and maintains cooling system for a particular range of temperature.

## Door Sensors
- To turn on the lights when the door is kept open.

## Temperature Sensors
- To determine the temperature of the freezer. 

## LCD Display
- To show Temperature readings

## ADC
- Converts the Analog signal from Potentiometer to Digital.

## Clock
- For Synchronization

## Compressor
- A compressor in a refrigeration system is used to circulate the refrigerant throughout the system, and at the very same time it is used to raise the temperature of the refrigerant above the condensing media such as either air, water or natural convection so that the condensation should take place.

## Actuators
- Externally connected devices that perform operation as per the decision which the microcontroller takes.

----------------------------------------
# V - Model
## Concept of Operation 
- Refrigerator takes real time input of temperature from the freezer and makes decision in order to maintain the temperature in the particular range.

## Low Level Requirements
- Switches to turn ON/OFF the system
- Power Supply to the Microcontroller, Sensors and Actuators

## High Level Requirements
- To detect the Temperature of the freezer using temperature sensors
- To detect the position of the door.
- To make decisions whether to increase or decrease the temperature of the freezer.

## Test Cases
- Are the decives receiving power supply? (Y/N)
- Are the sensors working fine? (Y/N)
- Is the decision made by the microcontroller to increase or decrease the temperature is correct? (Y/N)
- Is the LED turning ON when the door is open and turning OFF when the door is closed?(Y/N)

--------------------------
## Case Study : Dishwasher
### Dishwasher is an embedded system which uses a microcontroller to create an user interface that take input from user and also makes use of sensors( door sensor, load sensor) to work accordingly.
![WhatsApp Image 2022-02-20 at 00 42 00](https://user-images.githubusercontent.com/98872514/154816093-fafa2caf-e561-4985-9dbb-77196708a83d.jpeg)

## Power Supply:
- To provide power to the system.

## Switch buttons:
- To isolate the system or to power it, switches are used.

## LED's:
- They act as a mode of communication with the user.

## Microcontroller:
- Performs all operations requireed by the system.

## Door sensor:
- Senses the door position to switch on or off the light and to make sure the system is closed and is ready to operate.

## Load Sensor:
- Senses the load given and gives the warning if the load exceeds limit.

## Water level sensor:
- Senses the level of water.

## ADC: 
- Converts analog signal to digital
 
## Clock: 
- For Synchronization

## EPROM
- Memory storing unit.

## Actuators
- motors that perform the task.
----------------------------------------
# V - Model

## Concept of Operation
- Dishwasher is an embedded system which uses a microcontroller to create an user interface that take input from user and also makes use of sensors( door sensor, load sensor) to work accordingly.

## Low Level Requirements

- Switches to turn ON/OFF the system
- Power Supply to the Microcontroller, Sensors and motor
- To give an alert after the task is completed.
- To display the results using LCD.

## High Level Requirements
- To detect the level of load and give alert if the limit exceeds.
- To detect the position of the door.
- To alert when the task is completed.

## Test Cases
- Are the decives receiving power supply? (Y/N)
- Are the sensors working fine? (Y/N)
- Are the alerts given when required?(Y/N)