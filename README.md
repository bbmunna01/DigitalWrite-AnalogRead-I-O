In the breadboard, an LED to a digital pin (D6) and other pin to GND, a potentiometer middle pin to an analog input (A1), potentiometer left pin to VCC and right pin to GND. 

Here, the LED was controlled using digitalWrite() to blink every 500 ms, while the potentiometer value was read using analogRead() and printed to the Serial Monitor. By turning the potentiometer knob, You will see in the serial monitor the analog values changed between 1 and 1023, depending on the rotation.
