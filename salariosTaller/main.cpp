#include <iostream>

#include "GestionNomina.h"

int main() {

    GestionNomina nomina;

    nomina.inicializarDatos();

    nomina.procesarNomina();

    std::cout << std::endl;

    std::cout << "TOTAL NOMINA: "
              << nomina.calcularTotalNomina()
              << std::endl;

    return 0;
}
