# MaRS-club-task1

Q1. Blinking LED with different time interval


  TinkerCad link  : https://www.tinkercad.com/things/6W6wCIKbtb8-blinking-led-with-differrent-time-interval?sharecode=BYITj3nd7eQaZ7cMjh2-kPKw1Er16ZK193HQKWUEzYg

  Demo video link : https://drive.google.com/file/d/1C5iQSrU1IydF8H_Tye_ryhTobPWghA9g/view?usp=sharing
  
  Description     : I have used 3 leds,3 resistors, aurdino board, jumper wires and breadboard. I have used the millis() function which tells how much time have passed after starting the aurdino. The 3 leds blinks at 500, 1000, 1500 ms delay simultaneously by comparing the previous blinked time.

Q2. Controlling colour of RGB LED and blinking speed of an-other LED with potentiometer


  TinkerCad link  : https://www.tinkercad.com/things/9TBNFBiQCgx-potentiometer-with-rgb?sharecode=CX5JBEsCojFCFtb9vrt36Pw_rjtAK24J0vcRRYvJ34A
  
  Demo video link : https://drive.google.com/file/d/1VNIITodKf4IH236_1pHW0rXQ9n6teIeg/view?usp=sharing
  
  Description     : The potentiometer sends the analog signal as input to the aurdino. And I have used map function which manipulates the range of potentiometer (0-1023) to led, for each led. And the delay time for the blinking led is controlled by the the potentiometer values.

Q3. Build a reaction time tester


  TinkerCad link  : https://www.tinkercad.com/things/9aUQ1bv44pN-reaction-test?sharecode=EsnKjZGXMjfH07maxiAq_E1agJqKJzCdjVzf49fVIio
  
  Demo video link : https://drive.google.com/file/d/1OiZ4mr_UPI15116AnmryCcvw2nXCh5Ss/view?usp=sharing
  
  Description     : It measures how fast a user reacts when an LED turns ON. The Arduino waits for a random time and then led will be high and the user presses the button as quickly as possible. The button is connected using INPUT_PULLUP, which keeps the button value HIGH normally and changes it to LOW when pressed. As we use INPUT_PULLUP, no external resistor is needed. I have used the millis() function to calculate the reaction time and display it in the Serial Monitor.

Smart Distance Alert System


  TinkerCad link  : https://www.tinkercad.com/things/hEUBv2CXmL0-ultrasonic-sensor?sharecode=VLUq3vQztXFXm6fGUv3LiNcLhVaDHD76ZMGC1fiuHyU
  
  Demo video link : https://drive.google.com/file/d/1lZoEAdDR64qnVU_l3xGuWg_oHaCqGAwD/view?usp=sharing
  
  Description     : This project has an ultrasonic sensor to measure the distance of an object by sending sound waves and calculating the time taken for the echo to return. We convert this time into distance using the speed of sound formula. If the object comes closer than a 100 cm, the led turns on as an alert. And the distance of the obstacle is shown in the serial monitor. This system can be used for obstacle detection and safety applications.

Morse Code Transmitter


  TinkerCad link  : https://www.tinkercad.com/things/2aCs7ZxBcAU-morse-code?sharecode=cOIXapDNQbUyT71iHfOZ5ZThzhnxOuGcXjvEm7tXcWk
  
  Demo video link : https://drive.google.com/file/d/1sL06gMeRrJYmuddlqe1ug3OHVevWri2X/view?usp=sharing
  
  Description     : It converts text entered in the Serial Monitor into Morse code signals using an LED. Each alphabet from A to Z is represented using dots and dashes, where short flashes represent dots and long flashes represent dashes. The input text is taken from the user through serial monitor. The Arduino reads each character from the input and ssend to the morse() function(user defined). This project demonstrates serial communication and digital output control. And once the led signals are sent, we get a done message through serial monitor.

Automatic Night Lamp


  TinkerCad link  : https://www.tinkercad.com/things/gBlKGLoeqUU-ldr?sharecode=2-SeHocCbHbM1zpYI6mpNMc-OrEBJVokcFAnMlQUfe8
  
  Demo video link : https://www.tinkercad.com/things/gBlKGLoeqUU-ldr?sharecode=2-SeHocCbHbM1zpYI6mpNMc-OrEBJVokcFAnMlQUfe8
  
  Description     : This project uses an LDR (photoresistor) to detect the amount of light in the surroundings. The resistance of the LDR changes depending on light intensity, which is read by the Arduino through analog pin A0. When the environment becomes dark which is controlled by sliding the bar of ldr, the led turns on  automatically. When there is enough light, the led turns off. 

Bright Sense


  TinkerCad link  : https://www.tinkercad.com/things/hv3WaEPT5yd-smart-lamp?sharecode=3gf8jKrK8GUCgdvfaQ2ysmm0SYg4nuHhwFREmRyNRz4
  
  Demo video link : https://drive.google.com/file/d/1Jv1ad73JupYFXsC8JXvAQECjxTxOePad/view?usp=sharing
  
  Description     : This project uses an LDR (photoresistor) to detect the amount of light in the surroundings. The resistance of the LDR changes depending on light intensity, which is read by the Arduino through analog pin A0. When the environment becomes dark which is controlled by sliding the bar of ldr, the led turns on  automatically. When there is enough light, the led turns off. 
