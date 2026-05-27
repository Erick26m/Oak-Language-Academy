//
// Created by munoz on 25/05/2026.
//

#ifndef UNTITLED4_ENTRENADOR_H
#define UNTITLED4_ENTRENADOR_H
#include "persona.h"
#include "cliente.h"
#include "rutina.h"
class Entrenador : public Persona {
private:
    string especialidad;
    int aniosExperiencia;

public:
    Entrenador();
    Entrenador(string nombre, int edad, int id, string especialidad, int aniosExperiencia);

    string getEspecialidad();
    void setEspecialidad(string especialidad);

    int getAniosExperiencia();

    void asignarRutina(Cliente &cliente, Rutina rutina);
    void asignarRutina(Cliente &cliente, string nombreRutina, string objetivoRutina);

    string obtenerResumen() override;
};

Entrenador::Entrenador()
    : Persona(), especialidad(""), aniosExperiencia(0) {}

Entrenador::Entrenador(string nombre, int edad, int id, string especialidad, int aniosExperiencia)
    : Persona(nombre, edad, id), especialidad(especialidad), aniosExperiencia(aniosExperiencia) {}

string Entrenador::getEspecialidad() {
    return especialidad;
}

void Entrenador::setEspecialidad(string especialidad) {
    this->especialidad = especialidad;
}

int Entrenador::getAniosExperiencia() {
    return aniosExperiencia;
}

void Entrenador::asignarRutina(Cliente &cliente, Rutina rutina) {
    cliente.asignarRutina(rutina);
}

void Entrenador::asignarRutina(Cliente &cliente, string nombreRutina, string objetivoRutina) {
    cliente.asignarRutina(nombreRutina, objetivoRutina);
}

string Entrenador::obtenerResumen() {
    return "Entrenador: " + nombre +
           " | Especialidad: " + especialidad +
           " | Experiencia: " + to_string(aniosExperiencia) + " anios";
}
#endif //UNTITLED4_ENTRENADOR_H
