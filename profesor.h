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
    Profesor()
        : Persona(),
          idioma("Sin idioma"),
          aniosExperiencia(0) {}

    Profesor(string nombre, int edad, string matricula,
             string idioma, int aniosExperiencia)
        : Persona(nombre, edad, matricula),
          idioma(idioma),
          aniosExperiencia(aniosExperiencia) {}

    ~Profesor() override = default;

    string getIdioma() {
        return idioma;
    }

    void setIdioma(string idioma) {
        this->idioma = idioma;
    }

    int getAniosExperiencia() {
        return aniosExperiencia;
    }

    void asignarCurso(Estudiante &estudiante, Curso curso) {
        estudiante.asignarCurso(curso);
    }

    // Sobrecarga de metodo
    void asignarCurso(Estudiante &estudiante, string nombreCurso, string objetivoCurso) {
        estudiante.asignarCurso(nombreCurso, objetivoCurso);
    }

    string obtenerResumen() override {
        return "Profesor: " + nombre +
               "  Matricula: " + matricula +
               "  Idioma: " + idioma +
               "  Experiencia: " + to_string(aniosExperiencia) + " anios";
    }
};

#endif // UNTITLED4_PROFESOR_H
