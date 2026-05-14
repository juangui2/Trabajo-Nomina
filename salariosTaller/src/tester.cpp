#include "Tester.h"

Tester::Tester(std::string nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {

}

double Tester::calcularSalario() {

    return salarioBase * 1.05;
}
