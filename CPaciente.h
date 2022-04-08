#ifndef HOSPITAAL_CPACIENTE_H
#define HOSPITAAL_CPACIENTE_H

#include "CAbstract.h"
#include <string.h>
#include <iostream>
using namespace std;

///////HERENCIA
class CPaciente: public CPersona{
    string hora;
    int num=0;
public:
    CPaciente() {cout<<"\nIngresar datos del paciente";}

    void get(){
        cout<<"\n Nombre: "; cin>>nombre;
        cout<<"Apellido: "; cin>>apellido;
        cout<<"Edad: "; cin>>edad;
        cout<<"Hora de la cita: "; cin>>hora;
        cout<<"Numero de cita: "; cin>>num;
    }
    string getNombre(){return nombre;}
    string getApellido(){return apellido;}
    string getHora(){return hora;}
    int getEdad(){return edad;}
    int getNum(){return num;}

};

#endif //HOSPITAAL_CPACIENTE_H
