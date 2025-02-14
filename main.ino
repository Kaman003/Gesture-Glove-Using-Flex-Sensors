#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
const int speakerPin = 9; // Connect the speaker to digital pin 9

int a = 0;
int b = 0;
int c = 0;
int d = 0;
int e = 0;

void setup()
{
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);

  pinMode(speakerPin, OUTPUT);

  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 1);
}

void loop()
{
  a = analogRead(A0); //thumb
  b = analogRead(A1); //index
  c = analogRead(A2); //middle
  d = analogRead(A3); //ring
  e = analogRead(A4); //little
 //Serial.println(e);

  lcd.clear();

  if (a>=30 && a<=40) {
    Serial.println("TEA");
    lcd.print("TEA");
    beep(); // Beep when displaying "TEA"
  }
  delay(250);

  if (b>=20 && b<30) {
    Serial.println("COFFEE");
    lcd.print("COFFEE");
    beep(); // Beep when displaying "COFFEE"
  }
  delay(250);

  if (c>=15 && c<=25 ) {
    Serial.println("NEWSPAPER");
    lcd.print("NEWSPAPER");
    beep(); // Beep when displaying "NEWSPAPER"
  }
  delay(250);

  if (d>= 10 && d<=16) {
    Serial.println("LUNCH");
    lcd.print("LUNCH");
    beep(); // Beep when displaying "LUNCH"
  }
  delay(250);

  if (e>=10 && e<=20 ) {
    Serial.println("DINNER");
    lcd.print("DINNER");
    beep(); // Beep when displaying "DINNER"
  }
  delay(250);
  lcd.setCursor(0, 1);
}

void beep() {
  tone(speakerPin, 1000, 100); // Beep at 1000 Hz for 100 ms
  delay(150); // Add a short delay to avoid overlapping with LCD display
  noTone(speakerPin); // Stop the tone
}
