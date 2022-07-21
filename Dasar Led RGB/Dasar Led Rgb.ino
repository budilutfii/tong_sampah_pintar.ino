// deklarasi variabel pin LED

int redPin = 11;

int greenPin = 10;

int bluePin = 9;

//rutin dijalankan sekali saat Arduino start

void setup()

{

   // deklarasi pin sebagai output

   pinMode(redPin, OUTPUT);

   pinMode(greenPin, OUTPUT);

   pinMode(bluePin, OUTPUT);

}

//rutin dijalankan terus menerus setelah setup dijalankan

void loop()

{

  setColor(255, 0, 0);
  // setting warna merah

  delay(1000);            // menunggu 1000 milidetik

  setColor(0, 255, 0); // setting warna hijau

  delay(1000);            // menunggu 1000 milidetik

  setColor(0, 0, 255); // setting warna biru

  delay(1000);            // menunggu 1000 milidetik 

  setColor(255, 255, 0); // setting warna kuning

  delay(1000);            // menunggu 1000 milidetik

  setColor(80, 0, 80); // setting warna ungu

  delay(1000);            // menunggu 1000 milidetik

  setColor(0, 255, 255); // setting warna aqua

  delay(1000);            // menunggu 1000 milidetik

}

//rutin dijalankan setiap kali dipanggil

void setColor(int red, int green, int blue)

{

  analogWrite(redPin, red);            //menulis data analog ke pin LED merah

  analogWrite(greenPin, green);        //menulis data analog ke pin LED hijau

  analogWrite(bluePin, blue);        //menulis data analog ke pin LED biru

}
