#ifndef CAFETERA_HPP
#define CAFETERA_HPP

#include <string>
class Cafetera{
private:
    float capacidad {3.0};
    int tazasXMin {1};
    std::string nombre {"Indefinido"};
public:
    Cafetera(std::string,float,int);
    std::string toString();
    friend int operator +(Cafetera &c1,Cafetera &c2);
    friend int operator +(int num,Cafetera &c);
    friend bool operator >(Cafetera &c1,Cafetera &c2);
};

#endif
