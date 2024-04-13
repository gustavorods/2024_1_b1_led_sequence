// Led azul
int led1A = 13;
int led2A = 12;
int led3A = 11;
int led4A = 10;

// Led vermelho
int led1V = 9;
int led2V = 8;
int led3V = 7;
int led4V = 6;


void setup()
{
  pinMode(led1A, OUTPUT);
  pinMode(led2A, OUTPUT);
  pinMode(led3A, OUTPUT);
  pinMode(led4A, OUTPUT);
  pinMode(led1V, OUTPUT);
  pinMode(led2V, OUTPUT);
  pinMode(led3V, OUTPUT);
  pinMode(led4V, OUTPUT);
  
}

void loop()
{
 	AtivandoVermelhas(led1V,led2V,led3V,led4V);
  	AtivandoAzuis(led1A, led2A, led3A, led4A);
}



// Funções 
// Ativar todas as vermelhas
void AtivandoVermelhas(int led1V, int led2V, int led3V, int led4V) {
	digitalWrite(led1V, HIGH);
  	digitalWrite(led2V, HIGH);
	digitalWrite(led3V, HIGH);
  	digitalWrite(led4V, HIGH);
  	delay(500);
    digitalWrite(led1V, LOW);
  	digitalWrite(led2V, LOW);
	digitalWrite(led3V, LOW);
  	digitalWrite(led4V, LOW); 
}

// Ativando todas as azuis
void AtivandoAzuis(int led1A, int led2A, int led3A, int led4A) {
	digitalWrite(led1A, HIGH);
  	digitalWrite(led2A, HIGH);
	digitalWrite(led3A, HIGH);
  	digitalWrite(led4A, HIGH);
  	delay(500);
    digitalWrite(led1A, LOW);
  	digitalWrite(led2A, LOW);
	digitalWrite(led3A, LOW);
  	digitalWrite(led4A, LOW); 
}