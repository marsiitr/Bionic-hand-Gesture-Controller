# Arduino Code

### Liberaries Required
* Servo.h (Can be installed fron Arduino IDE)

### Variable Descriptions
* fingure1 to fingure5: Objects of servo class controlling each of the fingures.
* flex_1 to flex_5: Variables storing the pin values for each of the flex sensors.
* flex_1_val to flex_5_val: Variables to store data read from the sensors.

### Program Flow
The program reads the analogue sensor values proportional to the degree of movement of the fingure. this value is then mapped to the range [0,180]. This value is then given to servo for moving the fingure. This process is repeated to keep the arm responsive and working.
