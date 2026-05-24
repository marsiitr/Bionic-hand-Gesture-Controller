# Circuit Design


## Components:
The components required for this perticular ciruit are
* An arduino UNO bord
* Five flex sensors
* Five servo motors
* External power supply of 5V
* Five resistors of resistance equall to max ratting of sensor


## Connections:

The flex sensors are connected to aanalog pins of arduino using the voltage divider circuit. The GND pin of each sensor if sorted with the GND pin on the arduino board. The positive pins of the sensor are connected to one end resistor whose other pin is connected to 5V vcc of the arduino board. The Analogue pins from A1 till A5 are connected to the junction between the positive terminal of the sensors and the resistors, creating a voltage divider circuit.

All of the servo motors are attached to external power supply (VCC to 5V and GND to GND). The signal pins of each of the Servos are connected to the digital pins of the trduino from pin 15 to 19.

The tinker cad link of the circuit design is also attached bellow. You can use the arduino code to simulate the circuit as well.
[Cuirct Design](https://www.tinkercad.com/things/c0V2zHpxv7D?sharecode=th-N2vNREqnd5TBbJzbb8K8ZItW0BL3fG6pjc-oyQbA)
