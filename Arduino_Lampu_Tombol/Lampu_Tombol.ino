
int hasilBaca;

void setup() {
  // put your setup code here, to run once:

  pinMode(5, INPUT); //pin 5 sebagai input digital
  pinMode(9, OUTPUT); //pin 9 sebagai output digital

}

void loop() {
  // put your main code here, to run repeatedly:

  hasilBaca = digitalRead(5); //membaca pin 5

  if(hasilBaca == HIGH){
      
    digitalWrite(9, HIGH); //kalo pin 5 mati

  }else{

    digitalWrite(9, LOW); //kalo pin 5 hidup

  }


}
