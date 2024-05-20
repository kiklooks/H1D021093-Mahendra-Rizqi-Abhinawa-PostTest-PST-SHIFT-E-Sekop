#include <Arduino.h>

// Mendefinisikan nomor PIN
const int LEDMerah = D1;    
const int LEDHijau = D2;  

void setup() {
  pinMode(LEDMerah, OUTPUT);// Mengatur pin yang terhubung ke LED Merah sebagai output
  pinMode(LEDHijau, OUTPUT);// Mengatur pin yang terhubung ke LED Hijau sebagai output

  Serial.begin(115200);// Memulai komunikasi Serial dengan baud rate 115200
}

void loop() {
  digitalWrite(LEDMerah, HIGH);    // Menyalakan LED Merah
  digitalWrite(LEDHijau, LOW);     // Mematikan LED Hijau
  Serial.println("LED Merah Menyala"); // Menampilkan pesan bahwa LED Merah menyala
  delay(2000);                     // Menunggu selama 2 detik
  
  digitalWrite(LEDMerah, LOW);     // Mematikan LED Merah
  digitalWrite(LEDHijau, HIGH);    // Menyalakan LED Hijau
  Serial.println("LED Hijau Menyala"); // Menampilkan pesan bahwa LED Hijau menyala
  delay(2000);                     // Menunggu selama 2 detik
}

