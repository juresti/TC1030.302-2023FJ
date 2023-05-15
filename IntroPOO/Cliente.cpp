//Código de la clase Cliente \
3 de mayo de 2021

#include "Cliente.hpp"
#include <iostream>
using namespace std;

Cliente::Cliente() : nombre{""},regalo{Paquete()} {}
Cliente::Cliente(string nom) : nombre{nom},regalo{Paquete()}{}

string Cliente::getNombre() {return nombre;}
Paquete Cliente::entregaPaquete() {return regalo;}
void Cliente::guardaPaquete(Paquete pa) {
    regalo = pa;
    cout << "Tengo el paquete con la descripcion: " + regalo.getDescripcion() << endl;
}
