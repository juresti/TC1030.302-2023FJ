#ifndef LICUADORA_HPP
#define LICUADORA_HPP

#include "Electrodomestico.hpp"
#include <string>
using namespace std;

class Licuadora : public Electrodomestico{
private:
    int numVelocidades {4};
    bool pulsarActivo {false};
public:
    Licuadora();
    Licuadora(int);
    Licuadora(bool,string,int,bool); //completo
    void licuar();
//virtuales definidas en la clase padre 
    string toString();
    string dimeFuncionActual();
    void cambiaFuncionActual(string);
};
#endif
