#ifndef TELEFONO_HPP
#define TELEFONO_HPP

#include "SistemaComunicacion.hpp"
class Telefono : public SistemaComunicacion{
private:
    bool encendido {false};
    std::string numero {"1234567890"};
protected:
    Telefono(std::string);
public:
    void encender();
    void apagar();
    std::string getNumero();
    bool marcar(std::string);
};

#endif
