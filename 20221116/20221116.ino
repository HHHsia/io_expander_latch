//2*2led 每個led的+-個接一個latch 共8個latch

const int pin16 = 16;
const int pin17 = 17;
const int pin18 = 18;
const int pin19 = 19;

const int En00p = 13;
const int En00n = 14;
const int En10p = 15;
const int En10n = 21;
const int En01p = 22;
const int En01n = 23;
const int En11p = 25;
const int En11n = 26;

void SetAllGPIOPinModeToOutput() {
  pinMode(pin16, OUTPUT);
  pinMode(pin17, OUTPUT);
  pinMode(pin18, OUTPUT);
  pinMode(pin19, OUTPUT);

  pinMode(En00p, OUTPUT);
  pinMode(En00n, OUTPUT);
  pinMode(En01p, OUTPUT);
  pinMode(En01n, OUTPUT);
  pinMode(En10p, OUTPUT);
  pinMode(En10n, OUTPUT);
  pinMode(En11p, OUTPUT);
  pinMode(En11n, OUTPUT);
}

void ResetAllPin() {
  digitalWrite(pin16 , LOW);
  digitalWrite(pin17 , LOW);
  digitalWrite(pin18 , LOW);
  digitalWrite(pin19 , LOW);
  digitalWrite(En00p , LOW);
  digitalWrite(En00n , LOW);
  digitalWrite(En01p , LOW);
  digitalWrite(En01n , LOW);
  digitalWrite(En10p , LOW);
  digitalWrite(En10n , LOW);
  digitalWrite(En11p , LOW);
  digitalWrite(En11n , LOW);
}
void LatchChangeState(int pin , int En , int state) {
  digitalWrite(pin , state);
  digitalWrite(En , HIGH);
  delay(1);
  digitalWrite(En , LOW);
}
void LatchKeepState(int En) {
  digitalWrite(En , LOW);
}
void setup() {
  //Serial.begin(115200);
  SetAllGPIOPinModeToOutput();
  ResetAllPin();
}

void loop() {
  //Serial.println("Loop Start");
  //Serial.println("t0");
  digitalWrite(pin16 , HIGH);
  digitalWrite(En00p , HIGH);
  delay(1);
  digitalWrite(En00p , LOW);

  digitalWrite(En10p , HIGH);
  delay(1);
  digitalWrite(En10p , LOW);

  digitalWrite(pin17 , HIGH);
  digitalWrite(En01p , HIGH);
  delay(1);
  digitalWrite(En01p , LOW);

  digitalWrite(En11p , HIGH);
  delay(1);
  digitalWrite(En11p , LOW);
  
  digitalWrite(pin18 , HIGH);
  digitalWrite(En00n , HIGH);
  delay(1);
  digitalWrite(En00n , LOW);
  
  digitalWrite(En01n , HIGH);
  delay(1);
  digitalWrite(En01n , LOW);  
  
  digitalWrite(pin19 , HIGH);
  digitalWrite(En10n , HIGH);
  delay(1);
  digitalWrite(En10n , LOW);
  
  digitalWrite(En11n , HIGH);
  delay(1);
  digitalWrite(En11n , LOW);  

  //Serial.println("t1");
  digitalWrite(pin18 , LOW);
  digitalWrite(En00n , HIGH);
  delay(1);
  digitalWrite(En00n , LOW);  

  //Serial.println("t2");
  digitalWrite(pin18 , HIGH);

  digitalWrite(pin16 , HIGH);
  digitalWrite(En01p , HIGH);
  delay(1);
  digitalWrite(En01p , LOW);

  digitalWrite(pin19 , LOW);
  digitalWrite(En10n , HIGH);
  delay(1);
  digitalWrite(En10n , LOW);    


  //Serial.println("t3");
  digitalWrite(pin16 , LOW);
  digitalWrite(pin19 , HIGH);

  digitalWrite(pin17 , HIGH);
  digitalWrite(En01p , HIGH);
  delay(1);
  digitalWrite(En01p , LOW);  

  //Serial.println("t4");
  digitalWrite(pin18 , LOW);
  digitalWrite(En01n , HIGH);
  delay(1);
  digitalWrite(En01n , LOW);  

  //Serial.println("t5");
  digitalWrite(pin18 , HIGH);

  digitalWrite(pin17 , HIGH);
  digitalWrite(En11p , HIGH);
  delay(1);
  digitalWrite(En11n , LOW);

  digitalWrite(pin19 , LOW);
  digitalWrite(En11n , HIGH);
  delay(1);
  digitalWrite(En11n , LOW);    


  //Serial.println("Loop End");
  digitalWrite(pin16 , LOW);
  digitalWrite(pin17 , LOW);
  digitalWrite(pin18 , LOW);
  digitalWrite(pin19 , LOW);
  //delay(1000);
}
/*
  void loop() {
  //Serial.println("Loop Start");
  //Serial.println("t0");
  LatchChangeState(pin16 , En00p , HIGH);
  LatchChangeState(pin16 , En10p , HIGH);
  LatchChangeState(pin17 , En01p , LOW);
  LatchChangeState(pin17 , En11p , LOW);
  LatchChangeState(pin18 , En00n , HIGH);
  LatchChangeState(pin18 , En01n , HIGH);
  LatchChangeState(pin19 , En10p , HIGH);
  LatchChangeState(pin19 , En11p , HIGH);

  //Serial.println("t1");
  LatchChangeState(pin18 , En00n , LOW);

  //Serial.println("t2");
  digitalWrite(pin18 , HIGH);
  LatchChangeState(pin16 , En01p , HIGH);
  LatchChangeState(pin19 , En10n , LOW);

  //Serial.println("t3");
  digitalWrite(pin16 , LOW);
  digitalWrite(pin19 , HIGH);
  LatchChangeState(pin17 , En01p , HIGH);

  //Serial.println("t4");
  LatchChangeState(pin18 , En01n , LOW);

  //Serial.println("t5");
  digitalWrite(pin18 , HIGH);
  LatchChangeState(pin17 , En11p , HIGH);
  LatchChangeState(pin19 , En11n , LOW);

  //Serial.println("Loop End");
  digitalWrite(pin16 , LOW);
  digitalWrite(pin17 , LOW);
  digitalWrite(pin18 , LOW);
  digitalWrite(pin19 , LOW);
  //delay(1000);
  }*/
