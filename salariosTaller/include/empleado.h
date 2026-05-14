#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>

class Empleado {

protected:

    std::string nombre;
    double salarioBase;

public:

    Empleado(std::string nombre, double salarioBase);

    virtual double calcularSalario();

    virtual void mostrarInformacion();

    virtual ~Empleado();
};

#endif
