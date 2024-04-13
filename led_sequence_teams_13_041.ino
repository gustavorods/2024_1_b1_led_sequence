int ledVerde1 = 13;
int ledVerde2 = 9;
int ledVerde3 = 5;

int ledVermelho1 = 12;
int ledVermelho2 = 8;
int ledVermelho3 = 4;

int ledAzul1 = 11;
int ledAzul2 = 7;

int LedAmarelo1 = 10;
int LedAmarelo2 = 6;


void setup()
{
  pinMode(ledVerde1, OUTPUT);
  pinMode(ledVerde2, OUTPUT);
  pinMode(ledVerde3, OUTPUT);
  
  pinMode(ledVermelho1, OUTPUT);
  pinMode(ledVermelho2, OUTPUT);
  pinMode(ledVermelho3, OUTPUT);

  pinMode(ledAzul1, OUTPUT);
  pinMode(ledAzul2, OUTPUT);

  pinMode(LedAmarelo1, OUTPUT);
  pinMode(LedAmarelo2, OUTPUT);

}

void loop()
{
  Seq1(ledVerde1, ledVerde2, ledVerde3, ledAzul1, ledAzul2);
  Seq2(ledVermelho1, ledVermelho2, ledVermelho3, LedAmarelo1, LedAmarelo2);
  Seq1(ledVerde1, ledVerde2, ledVerde3, ledAzul1, ledAzul2);
  Seq2(ledVermelho1, ledVermelho2, ledVermelho3, LedAmarelo1, LedAmarelo2);
  Seq1(ledVerde1, ledVerde2, ledVerde3, ledAzul1, ledAzul2);
  Seq2(ledVermelho1, ledVermelho2, ledVermelho3, LedAmarelo1, LedAmarelo2);
  Seq3(ledVerde1, ledVermelho1, ledAzul1, LedAmarelo1, ledVerde2, ledVermelho2, ledAzul2, LedAmarelo2, ledVerde3, ledVermelho3);


}


// Funções 
// 1° sequência
void Seq1(int ledVerde1, int ledVerde2, int ledVerde3, int ledAzul1, int ledAzul2) {
	digitalWrite(ledVerde1, HIGH);
  	delay(500);
  	digitalWrite(ledVerde1, LOW);
  	digitalWrite(ledAzul1, HIGH);
  	delay(500);
  	digitalWrite(ledAzul1, LOW);
  	digitalWrite(ledVerde2, HIGH);
  	delay(500);
  	digitalWrite(ledVerde2, LOW);
    digitalWrite(ledAzul2, HIGH);
  	delay(500);
  	digitalWrite(ledAzul2, LOW);
    digitalWrite(ledVerde3, HIGH);
  	delay(500);
  	digitalWrite(ledVerde3, LOW);
}


// 2° Sequência 
void Seq2(int ledVermelho1, int ledVermelho2, int ledVermelho3, int LedAmarelo1, int LedAmarelo2) {
	digitalWrite(ledVermelho1, HIGH);
  	delay(500);
  	digitalWrite(ledVermelho1, LOW);
  	digitalWrite(LedAmarelo1, HIGH);
  	delay(500);
  	digitalWrite(LedAmarelo1, LOW);
  	digitalWrite(ledVermelho2, HIGH);
  	delay(500);
  	digitalWrite(ledVermelho2, LOW);
    digitalWrite(LedAmarelo2, HIGH);
  	delay(500);
  	digitalWrite(LedAmarelo2, LOW);
    digitalWrite(ledVermelho3, HIGH);
  	delay(500);
  	digitalWrite(ledVermelho3, LOW);
}


// 3° Sequência 
void Seq3(int ledVerde1, int ledVermelho1, int ledAzul1, int LedAmarelo1, int ledVerde2, int ledVermelho2, int ledAzul2, int LedAmarelo2, int ledVerde3, int ledVermelho3) {
  
  for (int i = 0; i < 3; i++) { // Repete 3 vezes
  
    // Da direita para a esquerda
    digitalWrite(ledVermelho3, HIGH);
    delay(500);
    digitalWrite(ledVermelho3, LOW);
    digitalWrite(ledVerde3, HIGH);
    delay(500);
    digitalWrite(ledVerde3, LOW);
    digitalWrite(LedAmarelo2, HIGH);
    delay(500);
    digitalWrite(LedAmarelo2, LOW);
    digitalWrite(ledAzul2, HIGH);
    delay(500);
    digitalWrite(ledAzul2, LOW);
    
    digitalWrite(ledVermelho2, HIGH);
    delay(500);
    digitalWrite(ledVermelho2, LOW);
    digitalWrite(ledVerde2, HIGH);
    delay(500);
    digitalWrite(ledVerde2, LOW);
    digitalWrite(LedAmarelo1, HIGH);
    delay(500);
    digitalWrite(LedAmarelo1, LOW);
    digitalWrite(ledAzul1, HIGH);
    delay(500);
    digitalWrite(ledAzul1, LOW);
    
    digitalWrite(ledVermelho1, HIGH);
    delay(500);
    digitalWrite(ledVermelho1, LOW);
    digitalWrite(ledVerde1, HIGH);
    delay(500);
    digitalWrite(ledVerde1, LOW);
	
     // Da esquerda para a direita
    digitalWrite(ledVerde1, HIGH);
    delay(500);
    digitalWrite(ledVerde1, LOW);
    digitalWrite(ledVermelho1, HIGH);
    delay(500);
    digitalWrite(ledVermelho1, LOW);
    
    digitalWrite(ledAzul1, HIGH);
    delay(500);
    digitalWrite(ledAzul1, LOW);
    digitalWrite(LedAmarelo1, HIGH);
    delay(500);
    digitalWrite(LedAmarelo1, LOW);
    digitalWrite(ledVerde2, HIGH);
    delay(500);
    digitalWrite(ledVerde2, LOW);
    
    digitalWrite(ledVermelho2, HIGH);
    delay(500);
    digitalWrite(ledVermelho2, LOW);
    digitalWrite(ledAzul2, HIGH);
    delay(500);
    digitalWrite(ledAzul2, LOW);
    digitalWrite(LedAmarelo2, HIGH);
    delay(500);
    digitalWrite(LedAmarelo2, LOW);
    
    digitalWrite(ledVerde3, HIGH);
    delay(500);
    digitalWrite(ledVerde3, LOW);
    digitalWrite(ledVermelho3, HIGH);
    delay(500);
    digitalWrite(ledVermelho3, LOW);

  }
}
