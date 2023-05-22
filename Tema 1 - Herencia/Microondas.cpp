#include "Microondas.hpp"
#include <iostream>
using namespace std;

Microondas::Microondas() : Electrodomestico(), capacidad{3.5}, color{"Gris"} {}
Microondas::Microondas(float cap,string col) : Electrodomestico(), capacidad{cap}, color{col} {}

string Microondas::calentadoRapido(){
    if (isEncendido()) return "Calentando tu comida por 30 segundos...";
    else return "Primero enciendo el Microondas.";
}
    
void Microondas::encender(){
    cout << "Microondas encendido\n";
    setEncendido(true);
}
void Microondas::apagar() {
    cout << "Apagando microondas\n";
    setEncendido(false);
}
    
string Microondas::toString(){
    return "Microondas(" + to_string(isEncendido()) + "," +
            to_string(capacidad) + "," + color + ")"; 
}
