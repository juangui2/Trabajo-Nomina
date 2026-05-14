#include "Empleado.h"

#include <iostream>

Empleado::Empleado(std::string nombre, double salarioBase) {

    this->nombre = nombre;
    this->salarioBase = salarioBase;
}

double Empleado::calcularSalario() {

    return salarioBase;
}

void Empleado::mostrarInformacion() {

    std::cout << "Empleado: "
              << nombre
              << " | Salario: "
              << calcularSalario()
              << std::endl;
}

Empleado::~Empleado() {

}
