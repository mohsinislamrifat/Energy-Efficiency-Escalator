# Energy-Efficiency-Escalator

OBJECTIVE:

In this project we aimed to build an escalator which will be automatically activated when
it will sense the presence of people.

EQUIPMENTS AND COMPONENTS:

1.Arduino Uno R3

2.PIR Motion Sensor

3.6 volt DC Gear Motor

4.2N222A Transistor

5.Breadboard

6.Jumper Wires

7.9 volt battery for Arduino and 6 volt battery for motor

8.LCD

WORKING PRINCIPLE:

when someone comes in front of the escalator the PIR motion sensor
detects motion and gets HIGH . It sends signal to Arduino’s digital pin
number 9 . Then the gear motor assigned with the escalator starts rotating
for 5 seconds. We can increase the rotating time in the code and the motor
will run for more times. Then it stops. In the mean time while its running , if
someone comes in front of the escalator , it will continue rotating for
another 5 seconds. While no motion is detected , the escalator remain
stationary and it does not run.

OPPORTUNITIES,APPLICATIONS,FURTHERIMPROVEMENTS:

In this modern day still most of the shopping malls use the old fashioned escalator
which runs all through the day without stopping. This is a huge loss of electricity in
a poor country like us. So to make energy efficient escalator we can use this device
with a relay switch to work with the real life escalator. This will save a great amount
of electric energy.

In future we can add a laser triggered circuit with this one to measure the height so
that the escalator runs when only people step in to the escalator; not any animals
or anything rather than human .
