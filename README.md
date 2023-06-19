# Bionic-hand-Gesture-Controlled

This project consists of a 3D printed boinic hand controlled by the movents of a real hand, on which the glove is to be worn. It can easily be clasified into two components the physical hand to be controlled and the glove to controll it. 

![Physical model](https://github.com/ShivamJha1808/Bionic-hand-Gesture-Controlled/assets/96729576/c1f6d492-af57-48ac-9987-0c487c3c2370)


## 3D Printed Boinic Hand
It is an assyembly of individual components of finguers, palm and forearm. The structure also houses the servo moters to controll the fingures and a microcontroller to operate every thing. The back face of the fingures has an ellatic string tied which provides force to pull it and keep it straight. Whenever any of the fingures is to be moved the servo pull a taught non ellastic string tied to the tip of fingure and passing through the front face of the fingure. the degree of bend of the fingure is decided by the amount of string pulled.

![Glove](https://github.com/ShivamJha1808/Bionic-hand-Gesture-Controlled/assets/96729576/aef4c383-391e-49d1-afb6-4d25489406c0)


## Glove (Controller)
On each fingure of the glove a flex sensor is attached. Whenever fingure is bent the flex sensor bends with it ass well. The resistance of a flex sensor change wrt the angle it has been bent. This change in resistance is measured using the voltage divider and analogue reading from micro-controller. Which is then mapped from 0 to 180 degrees to move the servo arm accordingly.

The circuit design and mechanical designs along with the arduino code are provided in the repositry.

```
Contributers
* Amit Kumar
* Aniket Raj
* Mitvik Sihag
* Naman Joshi
* Neelansh Varshney
* Shivam Jha
* Shivansh Sinha
* Utkarsh Singh
```
