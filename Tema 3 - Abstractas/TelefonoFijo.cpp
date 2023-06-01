#include "TelefonoFijo.hpp"

TelefonoFijo::TelefonoFijo(int nl) : Telefono{"55 5432 9876"}, 
                                    numLineas{nl} {}

bool TelefonoFijo::comunicar(){
    encender();
    marcar("55 9999 3333");
}
