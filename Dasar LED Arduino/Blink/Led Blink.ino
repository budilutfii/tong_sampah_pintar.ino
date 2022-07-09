// Menyalakan LED Menggunakan Arduino UNO

// Menyalakan LED dengan Aktif HIGH

void setup()

{

   // menjadikan PIN 4 sebagai OUTPUT

   pinMode(4, OUTPUT);

}

 

void loop()

{

   // Menyalakan PIN 4 (HIGH = Memberi tegangan pada PIN 4)

   digitalWrite(4, HIGH);

   // Pause selama 1 detik

   delay(100);

 

   // Mematikan PIN 4 (LOW = Tidak Memberi tegangan pada PIN 4)

   digitalWrite(4, LOW);

   // Pause selama 1 detik

   delay(100);

}

