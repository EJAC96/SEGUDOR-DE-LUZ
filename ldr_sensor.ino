const int fotopin = A0; //Creación de variable llamada "fotopin" con el valor guardado A0 
int valorSensor = 0; //Creación de variable llamada "valorSensor" con el valor guardado 0 

void setup() {//Rutina que se utiliza para configurar los pines del Arduino
  //pinMode(Pin del Arduino, Modalidad): Comando para establecer un pin 
  //del Arduino en modo de entrada o salida de señal
  pinMode(fotopin, INPUT); //Comando que establece al pin "fotopin" (A0) como una entada de señal analógica
  Serial.begin(9600); //Comando para inicializar la comunicación ente la PC y el Arduino
}

void loop() {///Rutina donde se escriben las intrucciones a realizar infinitamente
  //analogRead(Pin del Arduino): Comando que hace una lectura de un pin analógico del Arduino
  valorSensor = analogRead(fotopin);//Guarda la lectura del pin "fotopin" (A0) en la variable "valorSensor"
  Serial.print("Valor del Sensor: ");//Imprime el texto "Valor del sensor: " en el monitor serie
  Serial.println(valorSensor);//Imprime los datos guardados en la variable "valorSensor"
}
