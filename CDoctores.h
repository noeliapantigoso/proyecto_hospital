#ifndef HOSPITAAL_CDOCTORES_H
#define HOSPITAAL_CDOCTORES_H

#include "CDoctor.h"
#include "CPaciente.h"
#include <iostream>
#include <fstream>

using namespace std;

/////////////////////////////NEUROLOGIA//////////////////////////////////////////////
class CNeuro: public CDoctor{
    string especialidad="Neurologia";
public:
    CNeuro(){};
    CNeuro(string pnombre, string papellido, int pedad, string pcodigo, string phorario):
    CDoctor(pnombre, papellido, pedad, pcodigo, phorario) {}

    string getEspecialidad() override {return especialidad;}

    void Asignar() override {
        CPaciente a1;
        a1.get();
        ///Abrir archivo para escritura
        ofstream out("neurologia.txt", ios::app);
        out<<endl<<a1.getNombre()<<"\t\t"<<a1.getApellido()<<"\t\t"<<a1.getHora()<<"\t\t"<<a1.getEdad()<<"\t\t"<<a1.getNum();
        out.close();
        cout<<"Tu entrada ha sido guardada"<<endl;
    }

    void Pacientes() override{
        ifstream in("neurologia.txt", ios::in);
        if(in.fail()){
            cout<<"No existe el archivo";
            exit(1);
        } else{
            char x[1000];
            while(!in.eof()){
                in.getline(x,1000,'\n');
                cout<<x<<endl;
            }
        }
    }

};

/////////////////////////////OFTALMOLOGIA//////////////////////////////////////////////
class COftalmo: public CDoctor{
    string especialidad="Oftalmologia";
public:
    COftalmo(){};
    COftalmo(string pnombre, string papellido, int pedad, string pcodigo, string phorario):
            CDoctor(pnombre, papellido, pedad, pcodigo, phorario) {}

    string getEspecialidad() override {return especialidad;}

    void Asignar() override {
        CPaciente a1;
        a1.get();
        ofstream out("oftalmologia.txt", ios::app);
        out<<endl<<a1.getNombre()<<"\t\t"<<a1.getApellido()<<"\t\t"<<a1.getHora()<<"\t\t"<<a1.getEdad()<<"\t\t"<<a1.getNum();
        out.close();
        cout<<"Tu entrada ha sido guardada"<<endl;
    }

    void Pacientes() override{
        ifstream in("oftalmologia.txt", ios::in);
        if(in.fail()){
            cout<<"No existe el archivo";
            exit(1);
        } else{
            char x[80];
            while(!in.eof()){
                in.getline(x,80,' ');
                cout<<x<<endl;
            }
        }
    }

};

/////////////////////////////CIRUGIA//////////////////////////////////////////////
class CCiru: public CDoctor{
    string especialidad="Cirugia";
public:
    CCiru(){};
    CCiru(string pnombre, string papellido, int pedad, string pcodigo, string phorario):
            CDoctor(pnombre, papellido, pedad, pcodigo, phorario) {}

    string getEspecialidad() override {return especialidad;}

    void Asignar() override {
        CPaciente a1;
        a1.get();
        ofstream out("cirugia.txt", ios::app);
        out<<endl<<a1.getNombre()<<"\t\t"<<a1.getApellido()<<"\t\t"<<a1.getHora()<<"\t\t"<<a1.getEdad()<<"\t\t"<<a1.getNum();
        out.close();
        cout<<"Tu entrada ha sido guardada"<<endl;
    }

    void Pacientes() override{
        ifstream in("cirugia.txt", ios::in);
        if(in.fail()){
            cout<<"No existe el archivo";
            exit(1);
        } else{
            char x[80];
            while(!in.eof()){
                in.getline(x,80,' ');
                cout<<x<<endl;
            }
        }
    }

};

/////////////////////////////RADIOLOGIA//////////////////////////////////////////////
class CRadio: public CDoctor{
    string especialidad="Radiologia";
public:
    CRadio(){};
    CRadio(string pnombre, string papellido, int pedad, string pcodigo, string phorario):
            CDoctor(pnombre, papellido, pedad, pcodigo, phorario) {}

    string getEspecialidad() override {return especialidad;}

    void Asignar() override {
        CPaciente a1;
        a1.get();
        ofstream out("radiologia.txt", ios::app);
        out<<endl<<a1.getNombre()<<"\t\t"<<a1.getApellido()<<"\t\t"<<a1.getHora()<<"\t\t"<<a1.getEdad()<<"\t\t"<<a1.getNum();
        out.close();
        cout<<"Tu entrada ha sido guardada"<<endl;
    }

    void Pacientes() override{
        ifstream in("radiologia.txt", ios::in);
        if(in.fail()){
            cout<<"No existe el archivo";
            exit(1);
        } else{
            char x[80];
            while(!in.eof()){
                in.getline(x,80,' ');
                cout<<x<<endl;
            }
        }
    }
};

#endif //HOSPITAAL_CDOCTORES_H
