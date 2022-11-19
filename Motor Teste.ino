//defining motors
#define M1p 7
#define M1n 6

#define M2p 8
#define M2n 9

#define sensor1 2


void setup() {
  pinMode(M1p,OUTPUT);
  pinMode(M1n,OUTPUT);
  pinMode(M2p,OUTPUT);
  pinMode(M2n,OUTPUT);  

  pinMode(SM1,OUTPUT);
  pinMode(SM2,OUTPUT);

  pinMode(sensor1,INPUT);
  Serial.begin(9600);
}
void loop() {
  while(digitalRead(sensor1) == HIGH){ //When there is something moves foward
    digitalWrite(M1p, HIGH);
    digitalWrite(M1n, LOW);

    digitalWrite(M2p, HIGH);
    digitalWrite(M2n,LOW);
    delay(1000);
  }
    // when sensor turns off moves backward 
    digitalWrite(M1p,LOW );
    digitalWrite(M1n,HIGH);
    digitalWrite(M2p,LOW );
    digitalWrite(M2n,HIGH);
    delay(1000);
  
}
