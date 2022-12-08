//relay 1
int relay = D5;
int button = D1;
int state = 0;
int a = 0;

//relay 2
int relay2 = D6;
int button2 = D2;
int state2 = 0;
int b = 0;

//relay 3
int relay3 = D7;
int button3 = D3;
int state3 = 0;
int c = 0;

//relay 4
int relay4 = D8;
int button4 = D4;
int state4 = 0;
int d = 0;


void setup() {
  // put your setup code here, to run once:
pinMode (relay, OUTPUT);
pinMode (relay2, OUTPUT);
pinMode (relay3, OUTPUT);
pinMode (relay4, OUTPUT);
pinMode (button, INPUT);
pinMode (button2, INPUT);
pinMode (button3, INPUT);
pinMode (button4, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//relay1
state = digitalRead (button);
if (state == 1){
  a++;
  delay (200);
} 
if (a == 0){
      digitalWrite(relay, 0);
      }
if (a == 1){
      digitalWrite(relay, 1);
      }
if (a == 2){
      digitalWrite(relay, 0);
      a = 0;
      }

//relay2
state2 = digitalRead (button2);
if (state2 == 1){
  b++;
  delay (200);
} 

if (b == 1){
      digitalWrite(relay2, 1);
      }
if (b == 2){
      digitalWrite(relay2, 0);
      b = 0;
      }

//relay3
state3 = digitalRead (button3);
if (state3 == 1){
  c++;
  delay (200);
} 

if (c == 1){
      digitalWrite(relay3, 1);
      }
if (c == 2){
      digitalWrite(relay3, 0);
      c = 0;
      }

//relay4
state4 = digitalRead (button4);
if (state4 == 1){
  d++;
  delay (200);
} 

if (d == 1){
      digitalWrite(relay4, 1);
      }
if (d == 2){
      digitalWrite(relay4, 0);
      d = 0;
      }
}
