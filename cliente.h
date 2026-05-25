//
// Created by munoz on 25/05/2026.
//

#ifndef UNTITLED4_CLIENTE_H
#define UNTITLED4_CLIENTE_H
#include "persona.h"
#include "membresia.h"
#include "rutina.h"

class Cliente : public Persona{

private:

    float peso;
    float altura;
    string objetivo;

    Membresia membresia;
    Rutina rutina;

public:

    Cliente()
    : Persona(), peso(0), altura(0), objetivo(""){}

    Cliente(string nom,int ed,int ident,float pes,float alt,
             string obj,Membresia mem)

    : Persona(nom,ed,ident),
      peso(pes),
      altura(alt),
      objetivo(obj),
      membresia(mem){}

    float calcularIMC(){

        if(altura<=0){

            return 0;

        }

        return peso/(altura*altura);

    }

    void asignarRutina(Rutina r){

        rutina=r;

    }

    // Sobrecarga

    void asignarRutina(string nombreRutina,string objetivoRutina){

        rutina=Rutina(nombreRutina,
                        objetivoRutina,
                        45,
                        "Media");

    }

    void mostrarDatos() override{

        cout<<"Cliente"<<endl;

        cout<<"Nombre: "<<nombre<<endl;
        cout<<"Edad: "<<edad<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Peso: "<<peso<<endl;
        cout<<"Altura: "<<altura<<endl;
        cout<<"Objetivo: "<<objetivo<<endl;

        membresia.mostrarMembresia();

        rutina.mostrarRutina();

    }

};
#endif //UNTITLED4_CLIENTE_H