##  High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | Integrate two Ultrasonic sensors with Microcontroller |  None | Succesful Integration |Succesful Integration|Requirement based |
|  H_02       | Integrate tLCD with Microcontroller |  None | Succesful Integration |Succesful Integration|Requirement based |

##  Low level test plan

| **Test ID** | **Description**       | **Exp I/P** | **Exp O/P** | **Actual Output** |**Type Of Test**  |   
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | Use two Potentiometers to give input to the ultrasonic sensors |  -  | -|-|Requirement based |
|  L_02       | Detect Distance of any object placed infront of right ultrasonic sensor |  For simulation : Expected input for ultrasonic sensor is given with help of potentiometer  | Right Warning : "cm" |Right Warning : "cm"|Requirement based |
|  L_03       | Detect Distance of any object placed infront of left ultrasonic sensor |  For simulation : Expected input for ultrasonic sensor is given with help of potentiometer  | Left Warning : "cm" |Left Warning : "cm"|Requirement based |
|  L_04       | Detect No object as an obstacle for the car |  For simulation : Expected input for ultrasonic sensor is given with help of potentiometer  | Safe | Safe |Requirement based |
|  L_03       | To power the LCD if any object is too close to the ultrasonic sensor | Object too close to the ultrasonic sensor | Display Right Warning or left warning or safe  | Display Right Warning or left warning or safe |Requirement based    |
