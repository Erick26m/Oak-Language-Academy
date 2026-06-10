//
// Created by munoz on 25/05/2026.
//
/* Clase Estudiante 
Esta clase representa al estudiante registrado dentro de la academia.
Hereda de la clase Persona, por lo que reutiliza atributos como nombre, edad y matrícula.
Relación con otras clases: 
- Hereda de Persona. 
- Tiene una Inscripcion. 
- Tiene un Curso asignado.
- Puede recibir un curso por medio de la clase Profesor.
La clase almacena información propia del estudiante, como su promedio, su inscripción y el curso que se le asigna dentro del sistema. 
También implementa el método obtenerResumen(), que viene de la clase Persona. 
Esto permite que un Estudiante pueda ser tratado como Persona usando polimorfismo, pero mostrando su información específica como estudiante.
*/
#include <string>
#include "persona.h"
#include "inscripcion.h"
#include "curso.h"
#include <iostream>

using namespace std;

class Estudiante : public Persona {
private:
    float promedio;
    Inscripcion inscripcion;
    Curso curso;

public:
    Estudiante();
    Estudiante(string nombre, int edad, string matricula,
               float promedio, Inscripcion inscripcion);

    ~Estudiante();

    float getPromedio();
    void setPromedio(float promedio);

    void asignarCurso(Curso curso);
    void asignarCurso(string nombreCurso, int duracionHoras);

    string obtenerResumen();
};

Estudiante::Estudiante() : Persona() {
    promedio = 0;
}

Estudiante::Estudiante(string nombre, int edad, string matricula,
                       float promedio, Inscripcion inscripcion)
    : Persona(nombre, edad, matricula) {
    this->promedio = promedio;
    this->inscripcion = inscripcion;
}

Estudiante::~Estudiante() {
}

float Estudiante::getPromedio() {
    return promedio;
}

void Estudiante::setPromedio(float promedio) {
    this->promedio = promedio;
}

void Estudiante::asignarCurso(Curso curso) {
    this->curso = curso;
}

void Estudiante::asignarCurso(string nombreCurso, int duracionHoras) {
    Curso nuevoCurso(nombreCurso, duracionHoras);
    curso = nuevoCurso;
}

string Estudiante::obtenerResumen() {
    return "Estudiante: " + nombre +
           "  Edad: " + to_string(edad) +
           "  Matricula: " + matricula +
           "  Promedio: " + to_string(promedio) +
           "  " + inscripcion.obtenerDescripcion() +
           "  Curso asignado: " + curso.getNombre();
}
#endif //UNTITLED4_CLIENTE_H
