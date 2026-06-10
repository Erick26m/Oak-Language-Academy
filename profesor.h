//
// Created by munoz on 25/05/2026.
//
/*
Clase Profesor

Esta clase representa a los profesores de la academia.
Hereda de Persona porque un profesor también tiene nombre y edad.

Relación con otras clases:
- Hereda de Persona.
- Se relaciona con Estudiante porque puede asignarle cursos.
- Se relaciona con Curso porque utiliza objetos Curso para hacer asignaciones.

Esta clase agrega información propia del profesor, como el idioma que enseña
y sus años de experiencia.
*/
#ifndef UNTITLED4_PROFESOR_H
#define UNTITLED4_PROFESOR_H
#include "persona.h"
#include "estudiante.h"
#include "curso.h"
#include <iostream>
#include <string>
using namespace std;

class Profesor : public Persona {
private:
    string idioma;
    int aniosExperiencia;

public:
    Profesor();
    Profesor(string nombre, int edad, string matricula,
             string idioma, int aniosExperiencia);

    ~Profesor();

    string getIdioma();
    void setIdioma(string idioma);

    int getAniosExperiencia();

    void asignarCurso(Estudiante &estudiante, Curso curso);
    void asignarCurso(Estudiante &estudiante, string nombreCurso, int duracionHoras);

    string obtenerResumen();
};

Profesor::Profesor() : Persona() {
    idioma = "Sin_idioma";
    aniosExperiencia = 0;
}

Profesor::Profesor(string nombre, int edad, string matricula,
                   string idioma, int aniosExperiencia)
    : Persona(nombre, edad, matricula) {
    this->idioma = idioma;
    this->aniosExperiencia = aniosExperiencia;
}

Profesor::~Profesor() {
}

string Profesor::getIdioma() {
    return idioma;
}

void Profesor::setIdioma(string idioma) {
    this->idioma = idioma;
}

int Profesor::getAniosExperiencia() {
    return aniosExperiencia;
}

void Profesor::asignarCurso(Estudiante &estudiante, Curso curso) {
    estudiante.asignarCurso(curso);
}

void Profesor::asignarCurso(Estudiante &estudiante, string nombreCurso, int duracionHoras) {
    estudiante.asignarCurso(nombreCurso, duracionHoras);
}

string Profesor::obtenerResumen() {
    return "Profesor: " + nombre +
           "  Edad: " + to_string(edad) +
           "  Matricula: " + matricula +
           "  Idioma: " + idioma +
           "  Experiencia: " + to_string(aniosExperiencia) + " anios";
}
#endif // UNTITLED4_PROFESOR_H
