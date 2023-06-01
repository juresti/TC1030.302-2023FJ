#include "SistemaComunicacion.hpp"

SistemaComunicacion::SistemaComunicacion(std::string sc) : tipoComunicacion{sc} {}

bool SistemaComunicacion::isComunicando() {return comunicando;}
void SistemaComunicacion::setComunicando(bool c) {comunicando = c;}
