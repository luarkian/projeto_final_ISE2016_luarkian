// Definição pino do sensor
int pin_a0 = A0;
int oxi =100;
//Definição do pino do motor
int pin_motor = 7;

void setup() {
 // Define o pino de leitura do sensor como entrada
  pinMode(pin_a0, INPUT);
  //Deine o pino de saida do motor
  pinMode(pin_motor, OUTPUT);
// Inicializa a serial
  Serial.begin(9600);
}

void loop() {
   // Ler os dados do pino analogico A0 do sensor
  int valor_analogico = analogRead(pin_a0);
 Serial.print(" Pino A0 : ");
   Serial.println(valor_analogico);
   
  if(valor_analogico > oxi){
     // Mostra os dados no serial monitor
      Serial.print(" Pino A0 : ");
      Serial.println(valor_analogico);
      
      Serial.println("MOTOR ATIVO");
      //Ligar o a Bomba
      digitalWrite(pin_motor,HIGH);
   
   //Deixa a bomba ligado por 15 minutos   
      delay(900000);    
   
    //Desligar o motor  
      digitalWrite(pin_motor,LOW);
       Serial.println("MOTOR DESATIVADO");
  }
}
