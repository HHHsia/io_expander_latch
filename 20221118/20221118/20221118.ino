const int LED00Input = 13;
const int LED01Input = 14;
const int LED10Input = 15;
const int LED11Input = 16;
const int LED00En = 17;
const int LED01En = 18;
const int LED10En = 19;
const int LED11En = 21;
//CPU 240MHz 1Tick = 4.1ns
#define x38 __asm__("nop\n\t""nop\n\t""nop\n\t""nop\n\t""nop\n\t"); // 5tick

void SetAllGPIOModeToOutput() {
  pinMode(LED00Input , OUTPUT);
  pinMode(LED01Input , OUTPUT);
  pinMode(LED10Input , OUTPUT);
  pinMode(LED11Input , OUTPUT);
  pinMode(LED00En , OUTPUT);
  pinMode(LED01En , OUTPUT);
  pinMode(LED10En , OUTPUT);
  pinMode(LED11En , OUTPUT);
}
void ResetAllPin() {
  digitalWrite(LED00Input , LOW);
  digitalWrite(LED01Input , LOW);
  digitalWrite(LED10Input , LOW);
  digitalWrite(LED11Input , LOW);
  digitalWrite(LED00En , HIGH);
  digitalWrite(LED01En , HIGH);
  digitalWrite(LED10En , HIGH);
  digitalWrite(LED11En , HIGH);
}
void setup() {
  SetAllGPIOModeToOutput();
  ResetAllPin();
}

void loop() {
  digitalWrite(LED00Input , HIGH);
  x38;x38;x38;x38;
  digitalWrite(LED01Input , HIGH);
  x38;x38;x38;x38;
  digitalWrite(LED10Input , HIGH);
  x38;x38;x38;x38;
  digitalWrite(LED11Input , HIGH);
  x38;x38;x38;x38;
  digitalWrite(LED00Input , LOW);
  x38;x38;x38;x38;
  digitalWrite(LED01Input , LOW);
  x38;x38;x38;x38;
  digitalWrite(LED10Input , LOW);
  x38;x38;x38;x38;
  digitalWrite(LED11Input , LOW);
  x38;x38;x38;x38;
  delay(1000);
}
