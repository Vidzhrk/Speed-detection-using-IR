#define ir1 25
#define ir2 26
unsigned long starttime;
unsigned long endtime;
float distance;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("distance in cm:");
  delay(5000);
  if (Serial.available()>0){
    distance= Serial.parseInt();
    Serial.print("entered:");
    Serial.println(distance);
  }
  while (distance!=0){
    int Y=digitalRead(ir1);
    if (Y==LOW){
      Serial.println("y is done");
      starttime=micros();
      int Z=digitalRead(ir2);
      while (Z==HIGH){
        Z=digitalRead(ir2);
      }
      endtime=micros();
      Serial.println("z is done");
      unsigned long microtime= endtime-starttime;
      float time= float(microtime)/1000000.0;
      float speed= distance/time;
      Serial.print("Speed is:");
      Serial.println(speed);
      distance=0;
      }
    delay(2000);
    
  }
  
}
