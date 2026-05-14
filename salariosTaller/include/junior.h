#ifndef JUNIOR_H
#define JUNIOR_H

#include "Empleado.h"

class Junior : public Empleado {

public:

    Junior(std::string nombre, double salarioBase);

    double calcularSalario() override;
};

#endif
