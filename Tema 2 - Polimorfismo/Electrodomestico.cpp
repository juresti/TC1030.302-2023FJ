#include "Electrodomestico.hpp"
#include <iostream>

using namespace std;

Electrodomestico::Electrodomestico() {}
bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::setEncendido(bool e) {encendido = e;}

void Electrodomestico::encender() {setEncendido(true);}
void Electrodomestico::apagar() {setEncendido(false);}

string Electrodomestico::toString(){
    return "Electrodomestico(" + to_string(encendido) + 
            "," + funcionActual + ")";
}

string Electrodomestico::dimeFuncionActual(){
    if (isEncendido()) return "La funcion del electrodomestico es " + funcionActual;
    else return "Electrodomestico apagado, no esta haciendo nada";  
}

void Electrodomestico::cambiaFuncionActual(string fa){
    funcionActual = fa;
    cout << "Funcion actual cambiada a " << fa << endl;
}
