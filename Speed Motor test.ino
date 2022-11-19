//defining motors
#define M1p 7
#define M1n 6

#define M2p 8
#define M2n 9

//defining speed control
#define SM1 3
#define SM2 10

#define sensor1 2



void setup() {
  pinMode(M1p,OUTPUT);
  pinMode(M1n,OUTPUT);
  pinMode(M2p,OUTPUT);
  pinMode(M2n,OUTPUT);  

  pinMode(SM1,OUTPUT);
  pinMode(SM2,OUTPUT);

  pinMode(sensor1,INPUT);
}

void loop() {
    //Half speed
    analogWrite(SM1,127); //min:0, Max:255
    analogWrite(SM2, 127);
    //Motor 1 forward
    digitalWrite(M1p,LOW );
    digitalWrite(M1n,HIGH);
    //Motor 2 forward
    digitalWrite(M2p,LOW );
    digitalWrite(M2n,HIGH);
    delay(1000);

    //full speed
    analogWrite(SM1,255);
    analogWrite(SM2,255);
    //Motor 1 forward
    digitalWrite(M1p,LOW );
    digitalWrite(M1n,HIGH);
    //Motor 2 forward
    digitalWrite(M2p,LOW );
    digitalWrite(M2n,HIGH);
    delay(1000);
}
