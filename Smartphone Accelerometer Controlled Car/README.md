# Smartphone Accelerometer Controlled Car
## Problem Statement
Making a car which can be controlled using the accelerometer sensor of a smartphone.
## Original Solution
### Input
The smartphone accelerometer acts as the input module. An existing Android App is used to send accelerometer sensor data to the connected Bluetooth module.
### Microcontroller
The microcontroller used is the Arduino Uno which is connected to the HC-05 Bluetooth Module for input from the smartphone.

The Uno is also connected to the L298 motor driver. It sends appropriate outputs to the L298 driver according to the inputs received from the accelerometer and the code.
### Output
The output module consists of the physical car itself with the wheels and electronics mounted on the chassis. The main components in the output are the L298 motor driver and the motors which drive the wheels.
## New Solution
### Input
* We can either stick to the existing solution of getting accelerometer data using existing apps or develop an app which is more customised.
* There are several platforms like MIT App Inventor where customised apps can be developed.
* In this way, apart from controlling the car using the accelerometer, we can also introduce manual controls through the touch screen.
* We can also introduce options to control the speed of the car.
### Microcontroller
The original solution uses the Arduino Uno coupled with the HC-05 Bluetooth Module for wireless solution. This can be replaced by a board with integrated Bluetooth functionality. Both, the Uno and the HC-05 module can be replaced by the ESP32 board.
#### Advantages
* Removes the HC-05 Module completely, hence saving space for that.
* Saves additional space as the ESP32 board is much smaller than the Uno.
* The ESP32 is much cheaper than the Uno and hence much cheaper than the Uno and the HC-05 module combined.
* Circuit becomes simpler as there is no need to connect a seperate Bluetooth Module.
### Output
The original solution for this module is satisfactory and does not need any modifications.

