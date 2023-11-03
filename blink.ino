#include <stdlib.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

/*
  Gerador de numero aleatorio com seed
  a seed impede que o mesmo numero seja 
  ligado duas vezes
*/

int generateRand() {
  static bool seeded = false;
  if (!seeded) {
    srand(analogRead(0));
    seeded = true;
  }
  int randomNum = rand() % 1000; // Random dentre 0 e 999
  return randomNum;
}

void loop() {
  int randDelay = generateRand();

  digitalWrite(LED_BUILTIN, HIGH); // Deixa o LED acesso
  delay(randDelay);

  digitalWrite(LED_BUILTIN, LOW); // Deixa o LED Desligado
  randDelay = generateRand();
  delay(randDelay);
}
