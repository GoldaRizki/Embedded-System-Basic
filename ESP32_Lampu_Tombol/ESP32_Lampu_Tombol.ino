
#define MBOH 25 // GPIO 25 
#define LAMPU 12 // GPIO 12


int sinyal_digital;

void setup() {
  // put your setup code here, to run once:

  pinMode(MBOH, INPUT);
  pinMode(LAMPU, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  sinyal_digital = digitalRead(MBOH);

  if(sinyal_digital == HIGH){

    digitalWrite(LAMPU, HIGH);

  }else{

    digitalWrite(LAMPU, LOW);

  }

}

