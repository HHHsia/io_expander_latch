const int data16 = 13;
const int data17 = 14;
const int data18 = 15;
const int data19 = 16;


     

const int en00p = 17;
const int en00n = 18;
const int en01p = 19;
const int en01n = 20;
const int en10p = 21;
const int en10n = 22;
const int en11p = 23;
const int en11n = 24;



void setup() {
  Serial.begin(115200);
  pinMode(15, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(19, OUTPUT);
  
  digitalWrite(15, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(17, HIGH);
  digitalWrite(18, HIGH);
  digitalWrite(19, HIGH);
}

void loop() {

  Serial.println("Start of loop");
  digitalWrite(16, HIGH);
  digitalWrite(16, LOW);
  digitalWrite(16, HIGH);
  digitalWrite(16, LOW);
  digitalWrite(16, HIGH);
  digitalWrite(16, LOW);

  Serial.println("t0");
  digitalWrite(16, HIGH);
  digitalWrite(17, LOW);
  digitalWrite(18, HIGH);
  digitalWrite(19, HIGH);
  delay(1500);

  Serial.println("t1");
  digitalWrite(18, LOW);
  delay(1500);

  Serial.println("t2");
  digitalWrite(18, HIGH);
  digitalWrite(19, LOW);
  delay(1500);

  Serial.println("t3");
  digitalWrite(19, HIGH);
  digitalWrite(16, LOW);
  digitalWrite(17, HIGH);

  Serial.println("t4");
  digitalWrite(18, LOW);
  delay(1500);

  Serial.println("t5");
  digitalWrite(18, HIGH);
  digitalWrite(19, LOW);
  delay(1500);

  Serial.println("end of loop");
  digitalWrite(16, LOW);
  digitalWrite(17, LOW);
  digitalWrite(18, LOW);
  digitalWrite(19, LOW);
  //delay(5000);
}
