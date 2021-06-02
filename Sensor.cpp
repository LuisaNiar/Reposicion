//Inicialización y logica
#Include "Sensor.h"
#Include "Arduino.h"

Sensor::Sensor(  int pinEntrada1;
                 int pinEntrada2;
                 int distanciaRAW; )[
                 pinEntrada1-3;
                 pinEntrada2-4
                 distanciaRAW-0]


void Sensor::inicializarPines(){
  pinMode(pinEntrada1,INPUT)
  pinMode(pinEntrada2,INPUT)
}
void Sensor::procesoDistancia(){
  distancia=distanciaRAW*0.5;
}
