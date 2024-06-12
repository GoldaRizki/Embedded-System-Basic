
#define PIN_LAMPU 14

int analog_baca;


void setup() {
  // put your setup code here, to run once:

    pinMode(PIN_LAMPU, OUTPUT);
    Serial.begin(9600);


}

void loop() {
  // put your main code here, to run repeatedly:

  analog_baca = analogRead(27);
  Serial.println(analog_baca);



  analogWrite(PIN_LAMPU, analog_baca);

}
