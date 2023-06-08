#include "Cafetera.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;


float obtenCapacidad(){
    float capacidad {0};
    bool valido {false};

    while (!valido){
        try{
            cout << "Dime la capacidad: "; cin >> capacidad;
            if(cin.fail()) throw invalid_argument("Capacidad debe de ser un numero flotante.");
            else{
                valido = true;                
            }
        } catch (invalid_argument objError){
            cout << "ERROR en la entrada de tus datos " << endl <<
                objError.what() << endl;
            cin.clear();
            cin.ignore(32767,'\n');
        }
    }
    return capacidad;
}


int obtenTazas(){
    int capacidad {0};
    bool valido {false};

    while (!valido){
        try{
            cout << "Dime el numero de tazas: "; cin >> capacidad;
            if(cin.fail()) 
                throw invalid_argument("El numero de tazas debe de ser un numero entero.");
            else{
                valido = true;                
            }
        } catch (invalid_argument objError){
            cout << "ERROR en la entrada de tus datos " << endl <<
                objError.what() << endl;
            cin.clear();
            cin.ignore(32767,'\n');
        }
    }
    return capacidad;
}

int main(int argc, char const *argv[])
{
    float cap = obtenCapacidad();
    int tazas = obtenTazas();
    string nombre {""};
    cout << "Dime el nombre de la cafetera: "; cin >> nombre;
    Cafetera caf1{nombre,cap,tazas};
    cout << caf1.toString() << endl;

    return 0;
}
