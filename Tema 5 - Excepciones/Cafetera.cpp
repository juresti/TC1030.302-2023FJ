#include "Cafetera.hpp"
using namespace std;

Cafetera::Cafetera(string n,float c,int t) : nombre{n},
                                            capacidad{c},
                                            tazasXMin{t} {}

string Cafetera::toString(){
    return "Cafetera(" + to_string(capacidad) + "," +
            to_string(tazasXMin) + "," +
            nombre + ")";
}
    
int operator +(Cafetera &c1,Cafetera &c2){
    return c1.tazasXMin + c2.tazasXMin;
}

int operator +(int num,Cafetera &c){
    return num + c.tazasXMin;
}

bool operator >(Cafetera &c1,Cafetera &c2){
    return c1.capacidad > c2.capacidad;
}
