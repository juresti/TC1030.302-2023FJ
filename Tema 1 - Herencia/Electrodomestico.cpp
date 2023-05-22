#include "Electrodomestico.hpp"

using namespace std;
Electrodomestico::Electrodomestico() : encendido{false} {}
bool Electrodomestico::isEncendido() {return encendido;}
void Electrodomestico::setEncendido(bool encendido) {this->encendido = encendido;}
string Electrodomestico::toString(){
    string estado = "Apagado";
    if (isEncendido()) estado = "Encendido";
    return "Electrodomestico(" + estado + ")";    
}
