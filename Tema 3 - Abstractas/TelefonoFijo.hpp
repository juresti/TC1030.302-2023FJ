#ifndef TFIJO_HPP
#define TFIJO_HPP

#include "Telefono.hpp"
class TelefonoFijo : public Telefono{
private:
    int numLineas {1};
public:
    TelefonoFijo(int);
    bool comunicar(); //abstracto
};

#endif
