 //THIS IS THE PROGRAM while THE 2012 PLTW ADV. 4D RIDE PROJECT
//NAMING SCHEME BENCH_PROJECTrevA, BENCH_PROJECTrevb, BENCH_PROJECTrevC...
//CREATED revB ON 21 MAY 2012 BY LIAM PATTERSON
//(C) 2012 LIAM PATTERSON, ALL RIGHTS RESERVED

//actuator solenoids
const int leftTop = 28;          //orange-white         
const int leftBottom = 26;       //green-white
const int rightTop = 24;         //white-green
const int rightBottom = 22;      //white-orange

//exhaust solenoids
const int leftTopEx = 36;         //brown-white        
const int leftBottomEx = 34;      //white-brown
const int rightTopEx = 32;        //white-blue
const int rightBottomEx = 30;     //blue-white

//button pins
const int leftTopbutton1 = 3;             
const int leftTopButton2 = 4;
const int leftBottombutton1 = 6;          
const int leftBottombutton2 = 7;
const int rightTopbutton1 = 9;
const int rightTopbutton2 = 10;
const int rightBottombutton1 = 12;
const int rightBottombutton2 = 13;

//read status; button1 is top, button 2 is bottom
int leftTopbutton1state = 0;              
int leftTopbutton2state = 0;
int leftBottombutton1state = 0;
int leftBottombutton2state = 0;
int rightTopbutton1state = 0;
int rightTopbutton2state = 0;
int rightBottombutton1state = 0;
int rightBottombutton2state = 0;

void setup() {  
  pinMode(leftTop, OUTPUT);                //declare in/out while actuators, buttons
  pinMode(leftBottom, OUTPUT);
  pinMode(rightTop, OUTPUT);
  pinMode(rightBottom, OUTPUT);
  pinMode(leftTopbutton1, INPUT);
  pinMode(leftTopButton2, INPUT);
  pinMode(leftBottombutton1, INPUT);
  pinMode(leftBottombutton2, INPUT);
  pinMode(rightTopbutton1, INPUT);
  pinMode(rightTopbutton2, INPUT);
  pinMode(rightBottombutton1, INPUT);
  pinMode(leftTopEx, OUTPUT);
  pinMode(leftBottomEx, OUTPUT);
  pinMode(rightTopEx, OUTPUT);
  pinMode(rightBottomEx, OUTPUT);
  
}

int lower(){
  digitalWrite(leftTop, LOW);
  digitalWrite(leftBottom, LOW);
  digitalWrite(rightTop, LOW);
  digitalWrite(rightBottom, LOW);
  digitalWrite(leftTopEx, HIGH);
  digitalWrite(leftBottomEx, HIGH);
  digitalWrite(rightBottomEx, HIGH);
  digitalWrite(rightTopEx, HIGH);
}

int calibrate(){
//  if (leftTopbutton1state == HIGH){
    while (leftTopbutton1state == HIGH){
      digitalWrite(leftTop, LOW);
    }
//}
//   if (leftTopbutton2state == HIGH){
    while (leftTopbutton2state == HIGH){
      digitalWrite(leftTop, HIGH);
    }
  // }
//    if (leftBottombutton1state == HIGH){
    while (leftBottombutton1state == HIGH){
      digitalWrite(leftBottom, LOW);
    }
  // }
//    if (leftBottombutton2state == HIGH){
    while (leftBottombutton2state == HIGH){
      digitalWrite(leftBottom, HIGH);
    }
 //  }
//    if (rightTopbutton1state == HIGH){
    while (rightTopbutton1state == HIGH){
      digitalWrite(rightTop, LOW);
    }
//   }
//    if (rightTopbutton2state == HIGH){
    while (rightTopbutton2state == HIGH){
      digitalWrite(rightTop, HIGH);
    }
//   }
//    if (rightBottombutton1state == HIGH){
    while (rightBottombutton1state == HIGH){
      digitalWrite(rightBottom, LOW);
    }
//   }
//    if (rightBottombutton2state == HIGH){
    while (rightBottombutton2state == HIGH){
      digitalWrite(rightBottom, HIGH);
    }
   }

int raise(){
  digitalWrite(leftTop, HIGH);
  digitalWrite(leftBottom, HIGH);
  digitalWrite(rightTop, HIGH);
  digitalWrite(rightBottom, HIGH);
  digitalWrite(leftTopEx, LOW);
  digitalWrite(leftBottomEx, LOW);
  digitalWrite(rightBottomEx, LOW);
  digitalWrite(rightTopEx, LOW);
}

int tiltBackward(){
  digitalWrite(leftTop, HIGH);
  digitalWrite(leftBottom, LOW);
  digitalWrite(rightTop, HIGH);
  digitalWrite(rightBottom, LOW);
  digitalWrite(leftTopEx, HIGH);
  digitalWrite(leftBottomEx, LOW);
  digitalWrite(rightTopEx, HIGH);
  digitalWrite(rightBottomEx, LOW); 
}

int tiltForward(){
  digitalWrite(leftTop, LOW);
  digitalWrite(leftBottom, HIGH);
  digitalWrite(rightTop, LOW);
  digitalWrite(rightBottom, HIGH);
  digitalWrite(leftTopEx, LOW);
  digitalWrite(leftBottomEx, HIGH);
  digitalWrite(rightBottomEx, LOW);
  digitalWrite(rightTopEx, LOW);
}

int tiltLeft(){
  digitalWrite(leftTop, LOW);
  digitalWrite(leftBottom, LOW);
  digitalWrite(rightTop, HIGH);
  digitalWrite(rightBottom, HIGH);
  digitalWrite(leftTopEx, LOW);
  digitalWrite(leftBottomEx, LOW);
  digitalWrite(rightTopEx, HIGH);
  digitalWrite(rightBottomEx, HIGH); 
}

int tiltRight(){
  digitalWrite(leftTop, HIGH);
  digitalWrite(leftBottom, HIGH);
  digitalWrite(rightTop, LOW);
  digitalWrite(rightBottom, LOW);
  digitalWrite(leftTopEx, HIGH);
  digitalWrite(leftBottomEx, HIGH);
  digitalWrite(rightTopEx, LOW);
  digitalWrite(rightBottomEx, LOW);
}

//void setup() {
//  pinMode(leftTop, OUTPUT);
//  pinMode(leftBottom, OUTPUT);    }
 void loop() {
   delay(2000);                // Action 1
//   calibrate();;
   raise();
   delay(14000);                // Action 2
   raise();
   delay(8000);                // Action 3
//   tiltBackward();
   raise();
   delay(4000);                // Action 4
   tiltRight();
   delay(2000);                // Action 5
   tiltLeft();
   delay(4000);                // Action 6
   tiltRight();
   delay(4000);                // Action 7
   tiltLeft();
   delay(6000);                // Action 8
   tiltRight();
   delay(8000);                // Action 9
   tiltLeft();
   delay(3000);                // Action 10
//   tiltBackward();
   raise();
   delay(15000);                // Action 11
//   calibrate();
   raise();
   delay(5000);                // Action 12
   tiltForward();
   delay(2000);                // Action 13
//   tiltBackward();
   raise();
   delay(2000);                // Action 14
   tiltRight();
   delay(6000);                // Action 15
   tiltForward();
   delay(2000);                // Action 16
//   tiltBackward();
   raise();
   delay(2000);                // Action 17
   tiltRight();
   delay(2000);                // Action 18
//   calibrate();
   delay(1000);                // Action 19
//   tiltBackward();
   raise();
   delay(2000);                // Action 20
   tiltForward();
   delay(2000);                // Action 21
//   tiltBackward();
   raise();
   delay(2000);                // Action 22
   tiltForward();
   delay(2000);                // Action 23
//   tiltBackward();
   raise();
   delay(1000);                // Action 24
//   calibrate();
   delay(2000);                // Action 25
   tiltRight();
   delay(5000);                // Action 26
   tiltForward();
   delay(14000);                // Action 27
   tiltRight();
   delay(2000);                // Action 28
//   calibrate();
   lower();
   delay(2000);                // Action 29
//   tiltBackward();
   raise();
   delay(1000);                // Action 30
   tiltForward();
   delay(1000);                // Action 31
//   tiltBackward();
   raise();
   delay(1000);                // Action 32
//   tiltBackward();
   lower();
   delay(2000);                // Action 33
//   calibrate();
   raise();
   delay(2000);                // Action 34
   tiltLeft();
   delay(1000);                // Action 35
   tiltRight();
   delay(3000);                // Action 36
   tiltLeft();
   delay(3000);                // Action 37
   tiltRight();
   delay(5000);                // Action 38
   tiltLeft();
   delay(2000);                // Action 39
//   calibrate();
   raise();
   delay(2000);                // Action 40
//   tiltBackward();
   raise();
   delay(2000);                // Action 41
   tiltForward();
   delay(2000);                // Action 42
//   tiltBackward();
   lower();
   delay(2000);                // Action 43
   tiltForward();
   delay(2000);                // Action 44
//   tiltBackward();
   raise();
   delay(2000);                // Action 45
   tiltForward();
   delay(2000);                // Action 46
// tiltBackward();
   raise();
   delay(2000);                // Action 47
   tiltForward();
   delay(6000);                // Action 48
//   tiltBackward();
   lower();
   delay(7000);                // Action 49
//   calibrate();
   raise(); 
   delay(11000);                // Action 50
//   tiltBackward();
   raise();
   delay(4000);                // Action 51
//   calibrate();
   lower();
   delay(2000);                // Action 52
   tiltLeft();
   delay(2000);                // Action 53
   tiltRight();
   delay(2000);                // Action 54
   tiltLeft();
   delay(1000);                // Action 55
   tiltRight();
   delay(1000);                // Action 56
   tiltLeft();
   delay(11000);                // Action 57
   tiltRight();
   delay(1000);                // Action 58
 }
