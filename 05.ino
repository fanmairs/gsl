int d=0;
int num[1]={0};
byte row[4]={5,4,3,2};
byte col[4]={9,8,7,6};
byte led[4]={10,11,12,13};
const char key[4][4]={
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
    
void setup() {
  Serial.begin(9600);
  for (int a = 0;a<4;a++) 
  {
    pinMode(row[a],INPUT);
    digitalWrite(row[a],HIGH);
    pinMode(col[a],OUTPUT);
    digitalWrite(col[a],HIGH);
    pinMode(led[a],OUTPUT);
  }
}
int a,b,c,s,e;
void match(){

  
  if (num[0]!=0){
    int e=num[0];  
    int a=e%2;e=e/2;
    int b=e%2;e=e/2;
    int c=e%2;e=e/2;
    int s=e%2;e=e/2;
    if(a==1){
      digitalWrite(10, HIGH);
      }
    if(a==0){
      digitalWrite(10, LOW);
      }
      
    if(b==1){
      digitalWrite(11, HIGH);
      }
    if(b==0){
      digitalWrite(11, LOW);
      }
      
    if(c==1){
      digitalWrite(12, HIGH);
      }
    if(c==0){
      digitalWrite(12, LOW);
      }
    if(s==1){
      digitalWrite(13, HIGH);
      }
    if(s==0){
      digitalWrite(13, LOW);
      }}}
     /*
   if (num[1]!=0){
    int e=num[0]*10+num[1];      
    int a=e%2;e=e/2;
    int b=e%2;e=e/2;
    int c=e%2;e=e/2;
    int s=e%2;e=e/2;
     if(a==1){
      digitalWrite(10, HIGH);
      }
    if(a==0){
      digitalWrite(10, LOW);
      }
      
    if(b==1){
      digitalWrite(11, HIGH);
      }
    if(b==0){
      digitalWrite(11, LOW);
      }
      
    if(c==1){
      digitalWrite(12, HIGH);
      }
    if(c==0){
      digitalWrite(12, LOW);
      }
    if(s==1){
      digitalWrite(13, HIGH);
      }
    if(s==0){
      digitalWrite(13, LOW);
      }}} 
      */
void loop() {
  for (int b=0;b<4;b++) 
  {
    for (int c=0;c<4;c++) 
    {
      digitalWrite(col[b],LOW);
      d = digitalRead(row[c]);
      if (d == LOW) //按下
      {
        Serial.println(key[b][c]);
        if (key[b][c]!=0){
    int e=key[b][c];  
    int a=e%2;e=e/2;
    int b=e%2;e=e/2;
    int c=e%2;e=e/2;
    int s=e%2;e=e/2;
    if(a==1){
      digitalWrite(10, HIGH);
      }
    if(a==0){
      digitalWrite(10, LOW);
      }
      
    if(b==1){
      digitalWrite(11, HIGH);
      }
    if(b==0){
      digitalWrite(11, LOW);
      }
      
    if(c==1){
      digitalWrite(12, HIGH);
      }
    if(c==0){
      digitalWrite(12, LOW);
      }
    if(s==1){
      digitalWrite(13, HIGH);
      }
    if(s==0){
      digitalWrite(13, LOW);}
      digitalWrite(10, LOW);
            digitalWrite(11, LOW);
            digitalWrite(12, LOW);
            digitalWrite(13, LOW);}
        /*
        Serial.println(b);
        Serial.println(c);
        if(b==3 and c==0)
          {
            digitalWrite(10, LOW);
            digitalWrite(11, LOW);
            digitalWrite(12, LOW);
            digitalWrite(13, LOW);
          }
        if(b==3 and c==2){match();}
        else{num[0]=key[b][c]; }
        Serial.println(num[0]);
        */
        delay(300);
      }
      digitalWrite(col[b], HIGH);//b一次全恢复，c大约4次
    }
  }
}
