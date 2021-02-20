
int motor_1_front=2;
int motor_1_back=3;

int motor_2_front=4;
int motor_2_back=5;

int motor_3_front=8;
int motor_3_back=9;

int motor_4_front=10;
int motor_4_back=11;

void setup() {

  pinMode(motor_1_front,OUTPUT);

   pinMode(motor_1_back,OUTPUT);
   
    pinMode(motor_2_front,OUTPUT);
     pinMode(motor_2_back,OUTPUT);
   
      pinMode(motor_3_front,OUTPUT);
       pinMode(motor_3_back,OUTPUT);
       
        pinMode(motor_4_front,OUTPUT);
       pinMode(motor_4_back,OUTPUT);        
  // put your setup code here, to run once:

}

void straight(){


  digitalWrite(motor_1_front,HIGH);
  digitalWrite(motor_2_front,HIGH);
  digitalWrite(motor_3_front,HIGH);
  digitalWrite(motor_4_front,HIGH);


   digitalWrite(motor_1_back,LOW);
  digitalWrite(motor_2_back,LOW);
  digitalWrite(motor_3_back,LOW);
  digitalWrite(motor_4_back,LOW);


}

void back()

{
  
  digitalWrite(motor_1_front,LOW);
  digitalWrite(motor_2_front,LOW);
  digitalWrite(motor_3_front,LOW);
  digitalWrite(motor_4_front,LOW);


  digitalWrite(motor_1_back,HIGH);
  digitalWrite(motor_2_back,HIGH);
  digitalWrite(motor_3_back,HIGH);
  digitalWrite(motor_4_back,HIGH);
  
}


void right()


{
   digitalWrite(motor_1_back,HIGH);
  digitalWrite(motor_2_back,HIGH);
  digitalWrite(motor_3_back,LOW);
  digitalWrite(motor_4_back,LOW);


   digitalWrite(motor_1_front,LOW);
  digitalWrite(motor_2_front,LOW);
  digitalWrite(motor_3_front,HIGH);
  digitalWrite(motor_4_front,HIGH);


  
}


void left()
{



   digitalWrite(motor_1_front,HIGH);
  digitalWrite(motor_2_front,HIGH);
  digitalWrite(motor_1_back,LOW);
  digitalWrite(motor_2_back,LOW);


  
   digitalWrite(motor_3_back,HIGH);
  digitalWrite(motor_4_back,HIGH);
  digitalWrite(motor_3_front,LOW);
  digitalWrite(motor_4_front,LOW);

  
}

void loop() {
  // put your main code here, to run repeatedly:

straight();

delay(6000);

right();


delay(6000);

back();

delay(6000);
    
left();  

}
