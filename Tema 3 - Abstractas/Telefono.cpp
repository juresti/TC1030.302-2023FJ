#include "Telefono.hpp"
#include <iostream>
using namespace std;

Telefono::Telefono(string num) : SistemaComunicacion{"Telefonica"},
                                    numero{num} {}

void Telefono::encender() {encendido = true;}
void Telefono::apagar() {encendido = false;}
string Telefono::getNumero() {return numero;}

bool Telefono::marcar(string num){
    if (encendido){
        cout << "Marcando al numero " << numero << endl;
        setComunicando(true);
    } else {
        cout << "Enciende primero el telefono" << endl;
    }
}
