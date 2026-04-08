const int l1=8;
const int l2=9;
const int l3=10;

unsigned long pm1=0;
unsigned long pm2=0;
unsigned long pm3=0;

const int i1=500;
const int i2=1000;
const int i3=1500;

bool s1=LOW;
bool s2=LOW;
bool s3=LOW;

void setup(){
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
}

void loop(){
  
  unsigned long cm=millis();
  
  if(cm-pm1>=i1){
    pm1=cm;
    s1=!s1;
    digitalWrite(l1,s1);
  }
  
  if(cm-pm2>=i2){
    pm2=cm;
    s2=!s2;
    digitalWrite(l2,s2);
  }
  
  if(cm-pm3>=i3){
    pm3=cm;
    s3=!s3;
    digitalWrite(l3,s3);
  }
}
