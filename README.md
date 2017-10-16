# Arduino_LinkIt7697_Servo_motor_Light_Sensor

This project shows how to detect the intensity of a given light source and move a servo motor accordingly using LinkIt 7697.

## Installation

If you want to use the **LinkIt 7697** with the Arduino IDE, follow [this](https://docs.labs.mediatek.com/resource/linkit7697-arduino/en/environment-setup) tutorial. As a summary:
1. Go to *File -> Preferences* and in the **Additional Boards Manager URLs**, type
```
http://download.labs.mediatek.com/package_mtk_linkit_7697_index.json
```
![install01](/images/install00.gif?raw=true)

2. Then go to *Tools -> Boards -> Board Manager...* and in the search box look for **LinkIt**. Install the additional libraries.

![install02](/images/install01.gif?raw=true)

3. Finally install the USB driver (CP210x) from [here](https://www.silabs.com/products/development-tools/software/usb-to-uart-bridge-vcp-drivers), selecting the correct OS configuration.

![install03](/images/pic99.png?raw=true)

## Code and configuration

In order to correctly connect the board and the sensor, the code has to be analyzed first.

### Code

#### Servo motor

In order to use a servo motor, we need to import the **Servo** library and initialize the **Servo** object as follows.
```arduino
#include <Servo.h>

Servo myservo;        // create servo object to control a servo
```
Note that the servo motor is polarized, i.e., can turn in both directions depending on the polarity. 

For starting it, just add the *begin* command to setup.
```arduino
void setup()
{
	myservo.attach(8);  // attaches the servo on pin 8 to the servo object
	Serial.begin(9600);
}
```
