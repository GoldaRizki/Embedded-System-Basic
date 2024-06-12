
#define PIN_OUT 14
#define POTENSIO 27

int baca_analog;

void setup() {
  // put your setup code here, to run once:

  ledcAttach(PIN_OUT, 10000, 12);
  Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:

  baca_analog = analogRead(POTENSIO);

  Serial.println(baca_analog);

  ledcWrite(PIN_OUT, baca_analog);

}

