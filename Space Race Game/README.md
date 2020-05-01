# Space Race Game
## Problem Statement
Make a Space Race Game where you need to keep your ship safe from enemy ships.
## Description
Space ship that is racing through the aliens spaceships, this spaceship will have three lanes to changes in order to avoid a hit with the aliens. At all time the aliens can occupy only two track and the player should be able to drive through the free track.

The game gets input from the joystick which is used to switch between the three lanes.

The Nokia 5110 Display can display bitmap images, so we converted the spaceship and enemy spaceship into bitmap images to be displayed.
## Original Solution
The original solution can be broadly classified into three units:
### Input
The game gets its input from a joystick. For the different positions of the joystick, the microcontroller gets input and the spaceship is set into the corresponding lane.
### Microcontroller/Code
The microcontroller used is the Arduino Uno.

The images for the spaceship and the alien spaceships are converted into bitmap images using the BitmapEncoder Software. There are many different functions in the code which set the spaceship to the correct lane using the input, keep track of the score, display images, increase the speed of the game according to the score etc.
### Output
To display the game, the Nokia 5110 Display is used which communicates through SPI protocol. It has a resolution of 84*48 pixels.

## New Solution
The new solution can also be broadly classified into three units:
### Input
The game gets its input from the ADXL345 Accelerometer Module instead. This is a 3-axis accelerometer module with both I2C and SPI interfaces.
* Advantages:
1. Using accelerometer module instead of using joystick makes the game more convenient to control and hence more enjoyable.
2. The ADXL345 Accelerometer Module uses the 3.3V power supply whereas the joystick uses 5V supply making it more power efficient.
3. Makes the game 'modern'.
* Disadvantages:
1. The ADXL345 Accelerometer Module is more expensive than a Joystick Module but it is only slightly so. The ease of controlling the game is worth the extra expense.
### Microcontroler/Code
Another funtion can be introduced in the code which divides the score into particular levels. Once the player crosses a particular score in a level, he reaches the next level. Each level has a higher gameplay speed. This makes the game more interesting.

Also, as the input has been changed from the joystick to the accelerometer, necessary changes have to be made to the setup part of the code and the input function has to be modified accordingly.
### Output
I think the Nokia 5110 Display is good enough for this game and it needs no changes.



