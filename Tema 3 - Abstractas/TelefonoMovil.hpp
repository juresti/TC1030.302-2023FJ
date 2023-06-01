#ifndef TELMOVIL_HPP
#define TELMOVIL_HPP

#include "Telefono.hpp"
class TelefonoMovil : public Telefono{
private:
    int pctBateria{46};
public:
    TelefonoMovil();
    std::string avisarBateriaBaja();
    bool cargarBateria();
    bool comunicar(); //abstracto
};

#endif
