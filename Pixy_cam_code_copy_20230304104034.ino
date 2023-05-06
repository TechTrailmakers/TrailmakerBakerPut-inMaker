#include <Pixy2.h>
#include <Pixy2CCC.h>

// This code works

Pixy2 pixy;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Starting...\n");

  pixy.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  pixy_loop();

}

void pixy_loop() {
  pixy.ccc.getBlocks();

  if(pixy.ccc.numBlocks) {
    Serial.print("Object detected");
    Serial.println(pixy.ccc.numBlocks);
    delay(1000);
    for (int i = 0; i < pixy.ccc.numBlocks; i++) {
      Serial.print("  Block");
      Serial.print(i);
      Serial.print(":");
      pixy.ccc.blocks[i].print();
    }
  }
}