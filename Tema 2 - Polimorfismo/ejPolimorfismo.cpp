#include "Electrodomestico.hpp"
#include "Licuadora.hpp"
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    //Electrodomestico el1{}; constructor es protected
    cout << "************ Pruebas de Licuadora \n";
    Electrodomestico *inventario [3];
    Electrodomestico *licUsando = nullptr;

    inventario[0] = new Licuadora{};
    inventario[1] = new Licuadora {7};
    inventario[2] = new Licuadora {true,"Triturando",13,true};
//Llamadas polimorficas
    licUsando = inventario[0];
    cout << licUsando->toString() << endl;
    licUsando = inventario[1];
    cout << licUsando->toString() << endl;
    licUsando = inventario[2];
    cout << licUsando->toString() << endl;


for (int i = 0; i<3; i++){
    licUsando = inventario[i];
    cout << licUsando->dimeFuncionActual() << endl;
}

//Convirtiendo de Electrodomestido a Licuadora
    Licuadora *miLic = (Licuadora*) inventario[0];
    miLic->licuar();
    return 0;
}
