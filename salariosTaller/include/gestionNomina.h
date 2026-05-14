#ifndef GESTIONNOMINA_H
#define GESTIONNOMINA_H

#include <vector>

#include "empleado.h"

class GestionNomina {

private:

    std::vector<Empleado*> empleados;

public:

    void inicializarDatos();

    void procesarNomina();

    double calcularTotalNomina();

    ~GestionNomina();
};

#endif
