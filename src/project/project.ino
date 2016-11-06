/* cs207 project
 *  caleb andrews
 *  partical model accelerator
 */

//sensor pins
const int sen1 = 3;
const int sen2 = 4;
const int sen3 = 5;

//transistor pins
const int tran1 = 6;
const int tran2 = 7;
const int tran3 = 8;

//delay time
int dT = 100;


void setup() {
  // put your setup code here, to run once:
  pinMode(tran1, OUTPUT);
  pinMode(tran2, OUTPUT);
  pinMode(tran3, OUTPUT);
  

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(sen1 == HIGH))
  {
    digitalWrite(tran1, HIGH);
    delay(dT);
    digitalWrite(tran1, LOW);
  }
  if(digitalRead(sen2 == HIGH))
  {
    digitalWrite(tran2, HIGH);
    delay(dT);
    digitalWrite(tran2, LOW);
  }
  if(digitalRead(sen3 == HIGH))
  {
    digitalWrite(tran3, HIGH);
    delay(dT);
    digitalWrite(tran3, LOW);
  }

}
