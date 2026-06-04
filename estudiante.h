//
// Created by munoz on 25/05/2026.
//
/*
Clase Estudiante

Esta clase representa a los alumnos inscritos en la academia.
Hereda de Persona porque un estudiante también tiene nombre, edad y matrícula.

Relación con otras clases:
- Hereda de Persona.
- Tiene una Inscripcion.
- Tiene un Curso asignado.
- Puede recibir cursos asignados por un Profesor.

Esta clase agrega información propia del estudiante, como promedio,
nivel académico y meta académica.
*/

#ifndef UNTITLED4_ESTUDIANTE_H
#define UNTITLED4_ESTUDIANTE_H
#include <string>
#include "persona.h"
#include "inscripcion.h"
#include "curso.h"
using namespace std;

class Estudiante : public Persona {
private:
    float promedio;
    string nivel;
    string metaAcademica;

    Inscripcion inscripcion;
    Curso curso;

public:
    Estudiante();

    Estudiante(string nombre, int edad, string matricula, float promedio,
               string nivel, string metaAcademica, Inscripcion inscripcion);

    ~Estudiante() override = default;

    float getPromedio();
    void setPromedio(float promedio);

    string getNivel();
    void setNivel(string nivel);

    string getMetaAcademica();
    void setMetaAcademica(string metaAcademica);

    float calcularPromedio();
// Asigna un curso completo al estudiante usando un objeto Curso.
    void asignarCurso(Curso curso);

// Sobrecarga de método: asigna un curso usando solo nombre y objetivo.
    void asignarCurso(string nombreCurso, string objetivoCurso);

    string obtenerResumen() override;
};

Estudiante::Estudiante()
    : Persona(),
      promedio(0),
      nivel("Sin nivel"),
      metaAcademica("Sin meta academica") {}

Estudiante::Estudiante(string nombre, int edad, string matricula, float promedio,
                       string nivel, string metaAcademica, Inscripcion inscripcion)
    : Persona(nombre, edad, matricula),
      promedio(promedio),
      nivel(nivel),
      metaAcademica(metaAcademica),
      inscripcion(inscripcion) {}

float Estudiante::getPromedio() {
    return promedio;
}

void Estudiante::setPromedio(float promedio) {
    this->promedio = promedio;
}

string Estudiante::getNivel() {
    return nivel;
}

void Estudiante::setNivel(string nivel) {
    this->nivel = nivel;
}

string Estudiante::getMetaAcademica() {
    return metaAcademica;
}

void Estudiante::setMetaAcademica(string metaAcademica) {
    this->metaAcademica = metaAcademica;
}

float Estudiante::calcularPromedio() {
    return promedio;
}

void Estudiante::asignarCurso(Curso curso) {
    this->curso = curso;
}

void Estudiante::asignarCurso(string nombreCurso, string objetivoCurso) {
    curso = Curso(nombreCurso, objetivoCurso, 80, nivel);
}

string Estudiante::obtenerResumen() {
    return "Estudiante: " + nombre +
           "  Matricula: " + matricula +
           "  Nivel: " + nivel +
           "  Promedio: " + to_string(calcularPromedio()) +
           "  Meta academica: " + metaAcademica +
           "  Inscripcion: " + inscripcion.getTipo() +
           "  Curso: " + curso.getNombre();
}
#endif //UNTITLED4_CLIENTE_H
