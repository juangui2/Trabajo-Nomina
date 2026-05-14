#include "GestionNomina.h"

#include <iostream>

#include "Junior.h"
#include "Senior.h"
#include "LiderTecnico.h"
#include "Tester.h"

void GestionNomina::inicializarDatos() {

    empleados.push_back(new Junior("Juan", 2000));
    empleados.push_back(new Junior("Maria", 2200));

    empleados.push_back(new Senior("Carlos", 4000));
    empleados.push_back(new Senior("Ana", 4500));

    empleados.push_back(new LiderTecnico("Pedro", 6000));
    empleados.push_back(new LiderTecnico("Luisa", 6500));

    empleados.push_back(new Tester("Sofia", 2500));
    empleados.push_back(new Tester("Diego", 2600));
}

void GestionNomina::procesarNomina() {

    std::cout << "===== NOMINA =====" << std::endl;

    for (Empleado* empleado : empleados) {

        empleado->mostrarInformacion();
    }
}

double GestionNomina::calcularTotalNomina() {

    double total = 0;

    for (Empleado* empleado : empleados) {

        total += empleado->calcularSalario();
    }

    return total;
}

GestionNomina::~GestionNomina() {

    for (Empleado* empleado : empleados) {

        delete empleado;
    }
}
