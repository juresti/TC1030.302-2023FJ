#include "TelefonoFijo.hpp"
#include "TelefonoMovil.hpp"
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    TelefonoFijo telCasa{2};
    telCasa.comunicar();

    TelefonoMovil miCel{};
    miCel.cargarBateria();
    miCel.comunicar();
    return 0;
}
