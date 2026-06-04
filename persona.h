//
// Created by munoz on 21/05/2026.
//
/*
Clase Persona

Esta clase funciona como la clase base abstracta del proyecto.
Representa la información común que comparten los estudiantes y profesores
de la academia, como el nombre, la edad y la matrícula.

Relación con otras clases:
- Estudiante hereda de Persona.
- Profesor hereda de Persona.

Se declara como clase abstracta porque no tiene sentido crear una Persona
genérica dentro del sistema. En la academia, las personas registradas serán
estudiantes o profesores.

El método obtenerResumen() es virtual puro, lo que obliga a las clases hijas
a implementar su propia versión. Esto permite aplicar polimorfismo en el main.
*/
#ifndef UNTITLED4_PERSONA_H
#define UNTITLED4_PERSONA_H
#include <iostream>
#include <string>
using namespace std;

class Persona {
protected:
    string nombre;
    int edad;
    string matricula;

public:
    Persona();
    Persona(string nombre, int edad, string matricula);

    // Destructor virtual para polimorfismo
    virtual ~Persona() = default;

    string getNombre();
    void setNombre(string nombre);

    int getEdad();
    void setEdad(int edad);

    string getMatricula();

    // Método virtual puro (Clase abstracta)
    virtual string obtenerResumen() = 0;
};

// IMPLEMENTACIONES

Persona::Persona()
    : nombre(""), edad(0), matricula("") {}

Persona::Persona(string nombre, int edad, string matricula)
    : nombre(nombre), edad(edad), matricula(matricula) {}

string Persona::getNombre() {
    return nombre;
}

void Persona::setNombre(string nombre) {
    this->nombre = nombre;
}

int Persona::getEdad() {
    return edad;
}

void Persona::setEdad(int edad) {
    this->edad = edad;
}

string Persona::getMatricula() {
    return matricula;
}
#endif //UNTITLED4_PERSONA_H
