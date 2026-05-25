//
// Created by munoz on 25/05/2026.
//

#ifndef UNTITLED4_ENTRENADOR_H
#define UNTITLED4_ENTRENADOR_H
#include "persona.h"
#include "cliente.h"

class Entrenador : public Persona{

private:

    string especialidad;
    int aniosExperiencia;

public:

    Entrenador()
    : Persona(),
      especialidad(""),
      aniosExperiencia(0){}

    Entrenador(string nom,int ed,int ident,
               string esp,int anios)

    : Persona(nom,ed,ident),
      especialidad(esp),
      aniosExperiencia(anios){}

    void asignarRutina(Cliente &cliente,
                        Rutina rutina){

        cliente.asignarRutina(rutina);

    }

    void mostrarDatos() override{

        cout<<"Entrenador"<<endl;

        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Especialidad: "<<especialidad<<endl;

    }

};
#endif //UNTITLED4_ENTRENADOR_H