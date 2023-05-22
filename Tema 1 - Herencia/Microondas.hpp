#ifndef MICRO_HPP
#define MICRO_HPP

#include "Electrodomestico.hpp"
#include <string>
using namespace std;

class Microondas : public Electrodomestico{
private:
    float capacidad;
    string color;
public:
    Microondas();
    Microondas(float,string);
    string calentadoRapido();
    void encender();
    void apagar();
    string toString();
};
#endif
