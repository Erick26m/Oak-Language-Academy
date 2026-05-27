//
// Created by munoz on 25/05/2026.
//

#ifndef UNTITLED4_CLIENTE_H
#define UNTITLED4_CLIENTE_H
#include "persona.h"
#include "membresia.h"
#include "rutina.h"

class Cliente : public Persona {
private:
    float peso;
    float altura;
    string objetivo;
    Membresia membresia;
    Rutina rutina;

public:
    Cliente();
    Cliente(string nombre, int edad, int id, float peso, float altura, string objetivo, Membresia membresia);

    float getPeso();
    void setPeso(float peso);

    float getAltura();
    void setAltura(float altura);

    string getObjetivo();
    void setObjetivo(string objetivo);

    Membresia getMembresia();
    void setMembresia(Membresia membresia);

    Rutina getRutina();
    void setRutina(Rutina rutina);

    float calcularIMC();

    void asignarRutina(Rutina rutina);
    void asignarRutina(string nombreRutina, string objetivoRutina);

    string obtenerResumen() override;
};

Cliente::Cliente()
    : Persona(), peso(0), altura(0), objetivo("") {}

Cliente::Cliente(string nombre, int edad, int id, float peso, float altura, string objetivo, Membresia membresia)
    : Persona(nombre, edad, id), peso(peso), altura(altura), objetivo(objetivo), membresia(membresia) {}

float Cliente::getPeso() {
    return peso;
}

void Cliente::setPeso(float peso) {
    this->peso = peso;
}

float Cliente::getAltura() {
    return altura;
}

void Cliente::setAltura(float altura) {
    this->altura = altura;
}

string Cliente::getObjetivo() {
    return objetivo;
}

void Cliente::setObjetivo(string objetivo) {
    this->objetivo = objetivo;
}

Membresia Cliente::getMembresia() {
    return membresia;
}

void Cliente::setMembresia(Membresia membresia) {
    this->membresia = membresia;
}

Rutina Cliente::getRutina() {
    return rutina;
}

void Cliente::setRutina(Rutina rutina) {
    this->rutina = rutina;
}

float Cliente::calcularIMC() {
    if (altura <= 0) {
        return 0;
    }

    return peso / (altura * altura);
}

void Cliente::asignarRutina(Rutina rutina) {
    this->rutina = rutina;
}

void Cliente::asignarRutina(string nombreRutina, string objetivoRutina) {
    rutina = Rutina(nombreRutina, objetivoRutina, 45, "Media");
}

string Cliente::obtenerResumen() {
    return "Cliente: " + nombre +
           "  Objetivo: " + objetivo +
           "  IMC: " + to_string(calcularIMC()) +
           "  Membresia: " + membresia.getTipo() +
           "  Rutina: " + rutina.getNombre();
}
#endif //UNTITLED4_CLIENTE_H
