# Respuestas Preguntas Teoricas

## ¿Cual es la clase base y por que?
La clase base es Empleado porque contiene los atributos y metodos comunes de todos los empleados, como nombre, salarioBase y calcularSalario().

## ¿Que metodo se sobrescribe en las clases derivadas?
El metodo que se sobrescribe es calcularSalario(), ya que cada tipo de empleado calcula el salario de manera diferente.

## ¿Donde se evidencia el polimorfismo en el programa?
El polimorfismo se evidencia al almacenar distintos tipos de empleados en un vector de Empleado* y llamar calcularSalario() o mostrarInformacion().

## ¿Por que seria menos adecuado usar muchos if o switch?
Porque el codigo seria mas dificil de mantener y ampliar. Con polimorfismo cada clase maneja su propio comportamiento.
