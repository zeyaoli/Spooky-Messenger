
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver();

#define SERVOMIN  240 // this is the 'minimum' pulse length count 
#define SERVOMAX  820 // this is the 'maximum' pulse length count 

// servo # counter
byte servonum = 0;

int incomingByte;

int delayTime = 1500;

void setup() {
  Serial.begin(9600);

  pwm.begin();
  
  pwm.setPWMFreq(80);  // Analog servos run at ~60 Hz updates

}


void loop() {
//  Serial.println(servonum);

  if(Serial.available() > 0){
    incomingByte = Serial.read();
  // first motor GOOD
    if(incomingByte == 'Q'){
      pwm.setPWM(0, 0, 650);
      delay(delayTime);
      pwm.setPWM(0, 0, 460);
    }

    if(incomingByte == 'W'){
      pwm.setPWM(0, 0, 220);
      delay(delayTime);
      pwm.setPWM(0, 0, 480);
    }
  // second motor GOOD
    if(incomingByte == 'E'){
      pwm.setPWM(1, 0, 850);
      delay(delayTime);
      pwm.setPWM(1, 0, 650);
    }

     if(incomingByte == 'R'){
      pwm.setPWM(1, 0, 450);
      delay(delayTime);
      pwm.setPWM(1, 0, 650);
    }
  // third servo GOOD
    if(incomingByte == 'T'){
      pwm.setPWM(2, 0, 820);
      delay(delayTime);
      pwm.setPWM(2, 0, 670);
    }

     if(incomingByte == 'Y'){
      pwm.setPWM(2, 0, 470);
      delay(delayTime);
      pwm.setPWM(2, 0, 670);
    }
  // forth servo GOOD
    if(incomingByte == 'U'){
      pwm.setPWM(3, 0, 650);
      delay(delayTime);
      pwm.setPWM(3, 0, 450);
    }

     if(incomingByte == 'I'){
      pwm.setPWM(3, 0, 250);
      delay(500);
      pwm.setPWM(3, 0, 450);
    }
  // fifth servo GOOD
    if(incomingByte == 'O'){
      pwm.setPWM(4, 0, 880);
      delay(delayTime);
      pwm.setPWM(4, 0, 680);
    }

     if(incomingByte == 'P'){
      pwm.setPWM(4, 0, 470);
      delay(delayTime);
      pwm.setPWM(4, 0, 670);
    }
  // sixth servo GOOD
     if(incomingByte == 'A'){
      pwm.setPWM(5, 0, 650);
      delay(delayTime);
      pwm.setPWM(5, 0, 450);
    }

     if(incomingByte == 'S'){
      pwm.setPWM(5, 0, 320);
      delay(delayTime);
      pwm.setPWM(5, 0, 450);
    }
  // seventh servo BAD
    if(incomingByte == 'D'){
      pwm.setPWM(6, 0, 650);
      delay(delayTime);
      pwm.setPWM(6, 0, 450);
    }

     if(incomingByte == 'F'){
      pwm.setPWM(6, 0, 300);
      delay(delayTime);
      pwm.setPWM(6, 0, 450);
    }
    //eighth servo (GOOD BUT WILL SHAKE)
    if(incomingByte == 'G'){
      pwm.setPWM(7, 0, 950);
      delay(delayTime);
      pwm.setPWM(7, 0, 650);
    }

     if(incomingByte == 'H'){
      pwm.setPWM(7, 0, 470);
      delay(delayTime);
      pwm.setPWM(7, 0, 650);
    }
    // ninth servo BAD
    if(incomingByte == 'J'){
      pwm.setPWM(8, 0, 600);
      delay(delayTime);
      pwm.setPWM(8, 0, 450);
    }

     if(incomingByte == 'K'){
      pwm.setPWM(8, 0, 300);
      delay(delayTime);
      pwm.setPWM(8, 0, 450);
    }
    // tenth servo GOOD
    if(incomingByte == 'Z'){
      pwm.setPWM(9, 0, 650);
      delay(delayTime);
      pwm.setPWM(9, 0, 450);
    }

     if(incomingByte == 'X'){
      pwm.setPWM(9, 0, 320);
      delay(delayTime);
      pwm.setPWM(9, 0, 450);
    }

    // eleventh servo
    if(incomingByte == 'C'){
      pwm.setPWM(10, 0, 820);
      delay(delayTime);
      pwm.setPWM(10, 0, 670);
    }

     if(incomingByte == 'V'){
      pwm.setPWM(10, 0, 450);
      delay(delayTime);
      pwm.setPWM(10, 0, 670);
    }
    // twelveth servo GOOD
    if(incomingByte == 'B'){
      pwm.setPWM(11, 0, 820);
      delay(delayTime);
      pwm.setPWM(11, 0, 670);
    }

     if(incomingByte == 'N'){
      pwm.setPWM(11, 0, 450);
      delay(delayTime);
      pwm.setPWM(11, 0, 670);
    }
    // thirteenth servo GOOD
    if(incomingByte == 'L'){
      pwm.setPWM(12, 0, 750);
      delay(delayTime);
      pwm.setPWM(12, 0, 550);
    }

     if(incomingByte == 'M'){
      pwm.setPWM(12, 0, 330);
      delay(delayTime);
      pwm.setPWM(12, 0, 530);
    }

    
    if(incomingByte == ' '){
      delay(2000);
    }
    
    
  }
  int pulselength = map(90, 0, 180, SERVOMIN, SERVOMAX);
//  Serial.println(pulselength);
}
