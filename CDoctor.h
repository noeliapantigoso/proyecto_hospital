#ifndef HOSPITAAL_CDOCTOR_H
#define HOSPITAAL_CDOCTOR_H

#include "CAbstract.h"
#include <iostream>
using namespace std;


///////////HERENCIA
class CDoctor: public CPersona{
protected:
    string horario;
    string codigo;
public:
    CDoctor(){};
    CDoctor(string pnombre, string papellido, int pedad, string pcodigo, string phorario):
    CPersona(pnombre, papellido, pedad), codigo(pcodigo), horario(phorario) {}

    string getNombre(){return nombre;}
    string getHorario(){return horario;}
    string getCodigo(){return codigo;}
    int getEdad(){return edad;}

    //////POLIMORFISMOS
    virtual string getEspecialidad()=0;

    virtual void Asignar()=0;

    virtual void Pacientes()=0;
};
#endif //HOSPITAAL_CDOCTOR_H
