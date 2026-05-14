#include "Junior.h"

Junior::Junior(std::string nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {

}

double Junior::calcularSalario() {

    return salarioBase;
}
