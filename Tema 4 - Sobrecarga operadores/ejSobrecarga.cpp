#include "Cafetera.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    Cafetera c1 {"Goteo",4.5,1};
    Cafetera c2 {"Nesspresso",1.5,2};
    Cafetera c3 {"DeLonghi",10,5};
    Cafetera c4 {"Profesional",20,10};

    cout << c1.toString() << endl;
    cout << c2.toString() << endl;
    cout << c3.toString() << endl;

    int total = c1 + c2 + c3 + c4;
    cout << "Tus tres cafeteras pueden hacer " << total <<
        " tazas por minuto" << endl;
    return 0;
}
