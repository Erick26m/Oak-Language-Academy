//
// Created by munoz on 25/05/2026.
//
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
