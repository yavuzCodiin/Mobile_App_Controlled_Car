# <ins>Mobile_App_Controlled_Car</ins>

Building a custom car and its remote control system. This hands-on venture combines theoretical knowledge with technical skills, involving Arduino programming. This project, suitable for basic Arduino users, offers valuable coding experience. Let's dive into Arduino's practical applications and turn concepts into reality.

![17349631_1615261101834895_7790139166228665278_o](https://github.com/yavuzCodiin/Mobile_App_Controlled_Car/assets/82445309/f9d522e4-3ed1-4459-be65-76d91ae0ed72)

>* IDE: Arduino
>* Language: Arduino
>* Arduino uno R3 ,
>* x4 6V DC motor and wheel ,
>* HC-05 or HC-06 bluetooth module ,
>* L293d motor driver ,
>* 9v battery (for arduino supply) ,
>* 6v battery (for motor driver supply) ,
>* Jumper cables ,
>* Chassis or anything that can replace the chassis.

First of all, if the cables of our 6V DC motors are not soldered to the connection points, we solder them, if so, we apply silicone directly to the chassis and stick it, or you can also use velcro clamps that facilitate the plug-in process instead of silicone, then we open the motor inputs on our DC motors to our motor driver with a screwdriver and attach the cables.

There are 4 motor inputs here, M1, M2, M3, M4. It doesn't matter how you attach them, it doesn't cause you any trouble because the work ends in the code afterwards. Then we solder the VCC end of the bluetooth module to 3.3v, the GND end to GND, the Rx end to Tx, the Tx end to Rx. (Note: remove the VCC connection when assigning the code to the arduino, attach it after assigning it, otherwise it may not work.)

![car](https://github.com/yavuzCodiin/Mobile_App_Controlled_Car/assets/82445309/474e2379-6bc9-4c1b-b479-afcb5c013ea2)
