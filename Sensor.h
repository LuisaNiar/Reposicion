//Declaración
//Siempre debe estar incluido
#ifndef Sensor_h
#define Sensor_h
#Include "Arduino.h"

class Sensor {
  private:  
    int distanciaMedida;
    int pinEntrada1;
    int pinEntrada2;
    int distanciaRAW; 
    
    void inicializarPines();   
    int procesoDistancia(distanciaRAW);
}
