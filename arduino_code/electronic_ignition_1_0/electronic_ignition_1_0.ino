#define MAG_0 2
#define MAG_1 3
#define OUT_0 4
#define OUT_2 5

volatile unsigned long pulses = 0;

double velocity;

void setup() {
  // put your setup code here, to run once:
  pinMode(MAG_0, INPUT);
  pinMode(MAG_1, INPUT);
  pinMode(OUT_0, OUTPUT);
  pinMode(OUT_1, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(MAG_0), , CHANGE);
  attachInterrupt(digitalPinToInterrupt(MAG_1), , CHANGE);
}

void loop() {
  // put your main code here, to run repeatedly:
  
}


