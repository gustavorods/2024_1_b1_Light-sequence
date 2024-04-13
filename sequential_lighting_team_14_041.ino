int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;
int led7 = 7;
int led8 = 6;
int led9 = 5;
int led10 = 4;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
}

void loop()
{
  DireitaParaEsquerda(led1, led2, led3, led4, led5, led6, led7, led8, led9, led10);
  EsquerdaParaDireita(led1, led2, led3, led4, led5, led6, led7, led8, led9, led10); 

}



// Funções 
// Direita Pra Esquerda
void DireitaParaEsquerda(int led1, int led2, int led3, int led4, int led5, int led6, int led7, int led8, int led9, int led10) {
  digitalWrite(led10, HIGH);  // Acende o LED10
  delay(100);                  // Aguarda um pouco
  digitalWrite(led10, LOW);   // Apaga o LED10
  
  digitalWrite(led9, HIGH);   // Acende o LED9
  delay(100);                  // Aguarda um pouco
  digitalWrite(led9, LOW);    // Apaga o LED9
  
  digitalWrite(led8, HIGH);   // Acende o LED8
  delay(100);                  // Aguarda um pouco
  digitalWrite(led8, LOW);    // Apaga o LED8
  
  digitalWrite(led7, HIGH);   // Acende o LED7
  delay(100);                  // Aguarda um pouco
  digitalWrite(led7, LOW);    // Apaga o LED7
  
  digitalWrite(led6, HIGH);   // Acende o LED6
  delay(100);                  // Aguarda um pouco
  digitalWrite(led6, LOW);    // Apaga o LED6
  
  digitalWrite(led5, HIGH);   // Acende o LED5
  delay(100);                  // Aguarda um pouco
  digitalWrite(led5, LOW);    // Apaga o LED5
  
  digitalWrite(led4, HIGH);   // Acende o LED4
  delay(100);                  // Aguarda um pouco
  digitalWrite(led4, LOW);    // Apaga o LED4
  
  digitalWrite(led3, HIGH);   // Acende o LED3
  delay(100);                  // Aguarda um pouco
  digitalWrite(led3, LOW);    // Apaga o LED3
  
  digitalWrite(led2, HIGH);   // Acende o LED2
  delay(100);                  // Aguarda um pouco
  digitalWrite(led2, LOW);    // Apaga o LED2
  
  digitalWrite(led1, HIGH);   // Acende o LED1
  delay(100);                  // Aguarda um pouco
  digitalWrite(led1, LOW);    // Apaga o LED1
}

// Esquerda para direita 
void EsquerdaParaDireita (int led1, int led2, int led3, int led4, int led5, int led6, int led7, int led8, int led9, int led10) {
  digitalWrite(led1, HIGH);   // Acende o LED1
  delay(100);                  // Aguarda um pouco
  digitalWrite(led1, LOW);    // Apaga o LED1
  
  digitalWrite(led2, HIGH);   // Acende o LED2
  delay(100);                  // Aguarda um pouco
  digitalWrite(led2, LOW);    // Apaga o LED2
  
  digitalWrite(led3, HIGH);   // Acende o LED3
  delay(100);                  // Aguarda um pouco
  digitalWrite(led3, LOW);    // Apaga o LED3
  
  digitalWrite(led4, HIGH);   // Acende o LED4
  delay(100);                  // Aguarda um pouco
  digitalWrite(led4, LOW);    // Apaga o LED4
  
  digitalWrite(led5, HIGH);   // Acende o LED5
  delay(100);                  // Aguarda um pouco
  digitalWrite(led5, LOW);    // Apaga o LED5
  
  digitalWrite(led6, HIGH);   // Acende o LED6
  delay(100);                  // Aguarda um pouco
  digitalWrite(led6, LOW);    // Apaga o LED6
  
  digitalWrite(led7, HIGH);   // Acende o LED7
  delay(100);                  // Aguarda um pouco
  digitalWrite(led7, LOW);    // Apaga o LED7
  
  digitalWrite(led8, HIGH);   // Acende o LED8
  delay(100);                  // Aguarda um pouco
  digitalWrite(led8, LOW);    // Apaga o LED8
  
  digitalWrite(led9, HIGH);   // Acende o LED9
  delay(100);                  // Aguarda um pouco
  digitalWrite(led9, LOW);    // Apaga o LED9
  
  digitalWrite(led10, HIGH);  // Acende o LED10
  delay(100);                  // Aguarda um pouco
  digitalWrite(led10, LOW);   // Apaga o LED10
}


