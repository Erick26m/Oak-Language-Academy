//
// Created by munoz on 25/05/2026.
//

#ifndef UNTITLED4_RUTINA_H
#define UNTITLED4_RUTINA_H
#include <iostream>
#include <string>
using namespace std;

class Rutina{

private:

    string nombre;
    string objetivo;
    int duracionMin;
    string dificultad;

public:

    Rutina()
    : nombre("Sin rutina"),
      objetivo("Sin objetivo"),
      duracionMin(0),
      dificultad("Sin dificultad"){}

    Rutina(string nom,string obj,int duracion,string dif)
    : nombre(nom),
      objetivo(obj),
      duracionMin(duracion),
      dificultad(dif){}

    void mostrarRutina(){

        cout<<"Rutina: "<<nombre<<endl;
        cout<<"Objetivo: "<<objetivo<<endl;
        cout<<"Duracion: "<<duracionMin<<" min"<<endl;
        cout<<"Dificultad: "<<dificultad<<endl;

    }

};
#endif //UNTITLED4_RUTINA_H