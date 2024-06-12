
#define ANALOG_PIN 27 //GPIO 27

int nilai_baca;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  nilai_baca = analogRead(ANALOG_PIN);


  Serial.println(nilai_baca);


}

