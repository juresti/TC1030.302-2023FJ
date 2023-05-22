#ifndef ELECTRO_HPP
#define ELECTRO_HPP

#include <string>

class Electrodomestico {
private:
    bool encendido;
public:
    Electrodomestico();
    bool isEncendido();
    void setEncendido(bool);
    std::string toString();
};
#endif
