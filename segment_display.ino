//Tutorial : https://www.circuitbasics.com/arduino-7-segment-display-tutorial/

#include "SevSeg.h" // library from https://github.com/DeanIsMe/SevSeg
SevSeg sevseg; 

void setup(){
  byte numDigits = 4;
  byte digitPins[] = {10, 11, 12, 13};    // pins is used for the 4 digits {D1,D2,D3,D4}
  byte segmentPins[] = {2, 3, 4, 5, 6, 7, 8, 9};  // pins i connected the segments {A,B,C,D,E,F,G,DP}

  bool resistorsOnSegments = true; 
  bool updateWithDelaysIn = true;
  byte hardwareConfig = COMMON_ANODE; 
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments);
  sevseg.setBrightness(90);
}

void loop(){
    sevseg.setNumber(4444); //sets 4 for each of the digit
  // sevseg.setNumber() -> This function prints the number to the display. For example, sevseg.setNumber(4) will
  //print the number “4” to the display. You can also print numbers with decimal points. For example, to print the number “4.999”, 
  //you would use sevseg.setNumber(4999, 3).  The second parameter (the 3) defines where the decimal point is located. In this case it’s 
  //3 digits from the right most digit. On a single digit display, setting the second parameter to “0” turns on the decimal point, while setting it to “1” turns it off.
    
  
  sevseg.refreshDisplay(); //This function is required at the end of the loop section to continue displaying the number.
}
