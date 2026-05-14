#include "Senior.h"

Senior::Senior(std::string nombre, double salarioBase)
    : Empleado(nombre, salarioBase) {

}

double Senior::calcularSalario() {

    return salarioBase * 1.20;
}
