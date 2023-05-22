//Programa de prueba del ejemplo de Herencia
#include "Electrodomestico.hpp"
#include "Microondas.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "******** Pruebas de clase Electrodomestico \n";
    Electrodomestico elec {};
    cout << elec.toString() << endl;
    elec.setEncendido(true);
    cout << elec.isEncendido() << endl;

    cout << "\n ********** Pruebas de la clase Microondas \n";
    Microondas micro1 {};
    Microondas micro2 {5.7,"Blanco"};
    cout << micro1.toString() << endl;
    cout << micro2.toString() << endl;
    cout << micro1.calentadoRapido() << endl;
    micro2.encender();
    cout << micro2.calentadoRapido() << endl;
    micro2.apagar();
    cout << micro2.isEncendido() << endl;
    return 0;
}