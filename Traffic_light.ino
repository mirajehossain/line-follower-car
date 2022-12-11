int S = 0;
int WR = 3;
int WY = 2;
int WG = 1;

int SR = 4;
int SY = 5;
int SG = 6;

void setup() {
  pinMode(13, INPUT);
  pinMode(WR, OUTPUT);
  pinMode(WY, OUTPUT);
  pinMode(WG, OUTPUT);

  pinMode(SR, OUTPUT);
  pinMode(SY, OUTPUT);
  pinMode(SG, OUTPUT);
}
void loop() {

  digitalWrite(SR, HIGH); 
  digitalWrite(WG, HIGH);

 S = digitalRead(13);
 if(S == HIGH){

  delay(3000);
  digitalWrite(SR, 1); 
  digitalWrite(WG, 0); 
  digitalWrite(WY, 1); 
  delay(1200);  
 
  digitalWrite(SR, 1); 
  digitalWrite(WY, 0); 
  digitalWrite(WR, 1);
  delay(1200);  
  
  digitalWrite(SR, 0); 
  digitalWrite(SG, 1); 
  digitalWrite(WY, 0); 
  digitalWrite(WR, 1); 
  delay(5000);  

  digitalWrite(SR, 0); 
  digitalWrite(SG, 0); 
  digitalWrite(SY, 1); 
  digitalWrite(WR, 1); 
  delay(1200);  
  
  digitalWrite(SR, 1); 
  digitalWrite(WY, 0); 
  digitalWrite(SY, 0);
  digitalWrite(WR, 1); 
  delay(1200);  

  digitalWrite(SY, 0); 
  digitalWrite(WR, 0); 
 }
 }
