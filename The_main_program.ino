#include <Pixy2.h>
#include <Pixy2CCC.h>
#include <Servo.h>

int E1 = 5;
int M1 = 4;
int E2 = 6;                    
int M2 = 7; 

Servo myservo;   

Pixy2 pixy;

void setup() {
  // put your setup code here, to run once:
  pinMode(M1, OUTPUT);  
  pinMode(M2, OUTPUT);
  Serial.begin(9600);
  Serial.print("Starting...\n");

  pixy.init();

  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  
}

void loop() {
  // put your main code here, to run repeatedly:

  // pixy_loop();
  // motor_function();
  int angle = myservo.read();
  Serial.print(angle);

}

// void pixy_loop() {
//   pixy.ccc.getBlocks();
//   int angle = myservo.read();

//   if(pixy.ccc.numBlocks) {
//     for (int i = 0; i < pixy.ccc.numBlocks; i++) {
//       if (pixy.ccc.blocks[i].m_signature == 1) { // if red block detected
//         if (angle != 90) {
//             myservo.write(90);
//           }
//         Serial.print("Red block detected");
//         myservo.write(-90); // turn servo anticlockwise to 90 degrees
//         // delay(10);

//       } else if (pixy.ccc.blocks[i].m_signature == 2) { // if green block detected
//         if (angle != 0) {
//           myservo.write(90);
//         }
//         Serial.print("Green block detected\n");
//         myservo.write(0); // turn servo clockwise to 0 degrees
//         // delay(10);
//       }
//     }
//   }
// }

// // void motor_function() {
// //   int value;
// //   for(value = 0 ; value <= 255; value+=1)
// //   {
// //     digitalWrite(M1,HIGH);  
// //     digitalWrite(M2,HIGH);      
// //     analogWrite(E1, value);   //PWM Speed Control
// //     analogWrite(E2, value);   //PWM Speed Control
// //     delay(30);
// //   }
// // }
