#include "Licuadora.hpp"
#include <iostream>

using namespace std;
Licuadora::Licuadora() : Electrodomestico{} {}
Licuadora::Licuadora(int nv) : Electrodomestico{},
                                numVelocidades{nv} {}
Licuadora::Licuadora(bool e,string fa,int nv,bool pa) : Electrodomestico{},
                                                        numVelocidades{nv},
                                                        pulsarActivo{pa} { //completo
    setEncendido(e);
    //cambiaFuncionActual(fa);
    funcionActual = fa;
}

void Licuadora::licuar(){
    if (isEncendido()) cout << "Licuando tus alimentos con la funcion " +
                            funcionActual << endl;
}

string Licuadora::toString(){
    return "Licuadora(" + Electrodomestico::toString() + "," + 
            to_string(numVelocidades) + "," + to_string(pulsarActivo) + ")";
}

string Licuadora::dimeFuncionActual(){
    return "Tu licuadora de " + to_string(numVelocidades) + 
            " esta haciendo la funcion" + funcionActual;
}

void Licuadora::cambiaFuncionActual(string fa){
    Electrodomestico::cambiaFuncionActual(fa);
    cout << "Esto se hizo desde la Licuadora";
}
