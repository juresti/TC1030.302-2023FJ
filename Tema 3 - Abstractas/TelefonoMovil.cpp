#include "TelefonoMovil.hpp"
#include <iostream>

TelefonoMovil::TelefonoMovil() : Telefono{"55 1234 4321"} {}
std::string TelefonoMovil::avisarBateriaBaja(){
    if (pctBateria < 15) return "Bateria baja!!! Te queda " + 
                        std::to_string(pctBateria) + "%";
}

bool TelefonoMovil::cargarBateria(){
    std::cout << "Cargando al bateria...";
    return true;
}

bool TelefonoMovil::comunicar(){
    encender();
    marcar("55 7654 9876");
} //abstracto
