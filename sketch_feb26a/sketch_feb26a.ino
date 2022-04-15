char val;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void stop()
{
  digitalWrite(13,0);
  digitalWrite(12,0);
  digitalWrite(11,0);
  digitalWrite(10,0);
}

void forward()
{
  digitalWrite(13,0);
  digitalWrite(12,1);
  digitalWrite(11,0);
  digitalWrite(10,1);
}

void back()
{
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(11,1);
  digitalWrite(10,0);
}

void left()
{
  digitalWrite(13,1);
  digitalWrite(12,0);
  digitalWrite(11,0);
  digitalWrite(10,1);
}

void right()
{
  digitalWrite(13,0);
  digitalWrite(12,1);
  digitalWrite(11,1);
  digitalWrite(10,0);
}

void loop() {
  while (Serial.available()) {
    val=Serial.read();
    Serial.println(val);
  } 
  if(val=='S'){
    stop();
  } 
  if(val=='F'){
    forward();
  } 
  if(val=='B'){
    back();
  } 
  if(val=='L'){
    left();
  } 
  if(val=='R'){
    right();
  } 
}
