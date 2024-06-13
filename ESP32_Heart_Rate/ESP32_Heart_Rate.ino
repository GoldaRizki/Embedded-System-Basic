
/*
#define AD8232_PIN 33 // Masukkan pin yang digunakan untuk koneksi AD8232
#define READ_INTERVAL 10 // Interval pembacaan sensor dalam milidetik (ms)

unsigned long previousMillis = 0; // Waktu terakhir sensor dibaca
float bpm = 0.0; // Variabel untuk menyimpan nilai detak jantung dalam bpm (beats per minute)

void setup() {
  Serial.begin(9600); // Inisialisasi Serial Monitor
}

void loop() {
  unsigned long currentMillis = millis(); // Waktu saat ini
  if (currentMillis - previousMillis >= READ_INTERVAL) {
    previousMillis = currentMillis; // Simpan waktu terakhir sensor dibaca
    
    int sensorValue = analogRead(AD8232_PIN); // Baca nilai analog dari AD8232
    
    // Konversi nilai analog ke detak jantung dalam bpm (beats per minute)
    bpm = map(sensorValue, 0, 1023, 50, 130);
  }
  
  // Tampilkan nilai detak jantung ke Serial Monitor
  //Serial.print("Detak Jantung (aan detak jantung ke Serial Monitor dengan 2 desimal
}
*/


#define LP 12
#define LM 13
#define PIN_AN 33


void setup() {
// initialize the serial communication:
Serial.begin(9600);
pinMode(LP, INPUT); // Setup for leads off detection LO +
pinMode(LM, INPUT); // Setup for leads off detection LO -
 
}
 
void loop() {
 
if((digitalRead(LP) == 1)||(digitalRead(LM) == 1)){
Serial.println('!');
}
else{
// send the value of analog input 0:
Serial.println(analogRead(PIN_AN));
}
//Wait for a bit to keep serial data from saturating
delay(1);

}