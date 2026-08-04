#include <SoftwareSerial.h>
#include <DFRobotDFPlayerMini.h>

SoftwareSerial mySerial(10, 11);  // RX, TX
DFRobotDFPlayerMini myDFPlayer;

// Flex sensor pins
const int flex1 = A0;
const int flex2 = A1;
const int flex3 = A2;
const int flex4 = A3;
const int flex5 = A4;

// Threshold values
int threshold1 = 500;
int threshold2 = 500;
int threshold3 = 500;
int threshold4 = 500;
int threshold5 = 500;

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);

  Serial.println("Sign Language to Speech Conversion");

  if (!myDFPlayer.begin(mySerial)) {
    Serial.println("DFPlayer Mini connection failed!");
    Serial.println("Check wiring and SD card.");
    while (true);
  }

  Serial.println("DFPlayer Mini connected successfully.");

  myDFPlayer.volume(25);
}

void loop() {

  int value1 = analogRead(flex1);
  int value2 = analogRead(flex2);
  int value3 = analogRead(flex3);
  int value4 = analogRead(flex4);
  int value5 = analogRead(flex5);

  Serial.print("Flex 1: ");
  Serial.print(value1);

  Serial.print(" | Flex 2: ");
  Serial.print(value2);

  Serial.print(" | Flex 3: ");
  Serial.print(value3);

  Serial.print(" | Flex 4: ");
  Serial.print(value4);

  Serial.print(" | Flex 5: ");
  Serial.println(value5);

  /*
    Gesture 1:
    All fingers extended
  */
  if (value1 > threshold1 &&
      value2 > threshold2 &&
      value3 > threshold3 &&
      value4 > threshold4 &&
      value5 > threshold5) {

    Serial.println("Gesture Detected: Hello");
    myDFPlayer.play(1);
    delay(2000);
  }

  /*
    Gesture 2:
    Thumb bent
  */
  else if (value1 < threshold1 &&
           value2 > threshold2 &&
           value3 > threshold3 &&
           value4 > threshold4 &&
           value5 > threshold5) {

    Serial.println("Gesture Detected: Thank You");
    myDFPlayer.play(2);
    delay(2000);
  }

  /*
    Gesture 3:
    Thumb and index finger bent
  */
  else if (value1 < threshold1 &&
           value2 < threshold2 &&
           value3 > threshold3 &&
           value4 > threshold4 &&
           value5 > threshold5) {

    Serial.println("Gesture Detected: Yes");
    myDFPlayer.play(3);
    delay(2000);
  }

  /*
    Gesture 4:
    First three fingers bent
  */
  else if (value1 < threshold1 &&
           value2 < threshold2 &&
           value3 < threshold3 &&
           value4 > threshold4 &&
           value5 > threshold5) {

    Serial.println("Gesture Detected: No");
    myDFPlayer.play(4);
    delay(2000);
  }

  /*
    Gesture 5:
    All fingers bent
  */
  else if (value1 < threshold1 &&
           value2 < threshold2 &&
           value3 < threshold3 &&
           value4 < threshold4 &&
           value5 < threshold5) {

    Serial.println("Gesture Detected: Help");
    myDFPlayer.play(5);
    delay(2000);
  }

  delay(100);
}
