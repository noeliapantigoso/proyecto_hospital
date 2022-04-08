#ifndef HOSPITAAL_FUNCIONES_H
#define HOSPITAAL_FUNCIONES_H

#include "CDoctor.h"
#include "CDoctores.h"
#include <fstream>
#include <conio.h>
using namespace std;

////////////////// SOBRECARGA
ostream& operator<<(ostream& os,CDoctor &rDoctor){
    os << "Especialidad   : " << rDoctor.getEspecialidad() << "\n";
    os << "Codigo         : " << rDoctor.getCodigo() << "\n";
    os << "Nombre         : " << rDoctor.getNombre() << "\n";
    os << "Horario        : " << rDoctor.getHorario() << "\n";
    os << "Edad           : " << rDoctor.getEdad() << "\n";
    return os;
}


void Iniciar(vector <CDoctor *> &docs){
    ////////////////////// USO DE VECTORES Y PUNTEROS
    auto pDr1=new CNeuro("Jose","Chacon", 25, "0214","15:00-16:00");
    auto pDr2=new CNeuro("Flor","Antero", 31,"0213", "10:00-14:00");
    auto pDr3=new COftalmo("Manuel","Ramos", 29,"0323", "15:00-16:00");
    auto pDr4=new CCiru("Carlos","Mamani", 45, "0124","10:00-14:00");
    auto pDr5=new CCiru("Raul","Rosado", 34,"0125", "08:00-12:00");
    auto pDr6=new CCiru("Valeria","Mendoza", 42, "0126","15:00-16:00");
    auto pDr7=new CRadio("Dary","Gamero", 32,"0424", "17:00-20:00");

    docs= {pDr1, pDr2,pDr3,pDr4,pDr5,pDr6,pDr7};

    ofstream f1("neurologia.txt"); ofstream f2("oftalmologia.txt");
    ofstream f3("cirugia.txt"); ofstream f4("radiologia.txt");
    f1<<endl<<"Nombre"<<"\t\t"<<"Apell."<<"\t\t"<<"Hora"<<"\t\t"<<"Edad"<<"\t\t"<<"Num";
    f2<<endl<<"Nombre"<<"\t\t"<<"Apell."<<"\t\t"<<"Hora"<<"\t\t"<<"Edad"<<"\t\t"<<"Num";
    f3<<endl<<"Nombre"<<"\t\t"<<"Apell."<<"\t\t"<<"Hora"<<"\t\t"<<"Edad"<<"\t\t"<<"Num";
    f4<<endl<<"Nombre"<<"\t\t"<<"Apell."<<"\t\t"<<"Hora"<<"\t\t"<<"Edad"<<"\t\t"<<"Num";
    f1.close(); f2.close(); f3.close(); f4.close();
}
void InfoDr(vector <CDoctor *> &docs); //mostrar especialidades //imprimir a los doctores
void SacarCita(vector <CDoctor *> &docs); //Info Dr //guardar info del paciente en el archivo de la especialidad
void Reporte(); //recorrer doctores por especialidad y mostrar sus pacientes
void Menu(vector <CDoctor *> &docs);

void Menu(vector <CDoctor *> &docs){
    int op=0;
    do{
        cout<<"\n\n"
              "\t\t      |   ++++++++++++ MENU PRINCIPAL ++++++++++++    | \n"
              "\t\t      |          Sistema de reserva de citas          | \n"
              "\t\t      |   ========================================    | \n"
              "------------------------------------------------------------------------------------------"
              "\n1.Info doctores"
              "\n2.Sacar cita"
              "\n3.Reporte"
              "\n4.Salida"
              "\n\n\t\tEscoja una opcion: ";cin>>op;

        if(op==1){InfoDr(docs);}
        else if(op==2){SacarCita(docs);}
        else if(op==3){Reporte();}
    }while(op!=4);
}


void InfoDr(vector <CDoctor *> &docs){ //mostrar especialidades //imprimir a los doctores
    cout<<"\t\t      |   ++++++++++++ ESPECIALIDADES ++++++++++++    | \n"
          "\n1.Neurologia"
          "\n2.Oftalmologia"
          "\n3.Cirugia"
          "\n4.Radiologia"
          "\n\t\tEscoja una opcion: ";
    int op;
    cin>>op;
    if(op==1){
        cout<<"\n------- Datos de los doctores ------\n";
        for (auto & doctor: docs){
            if (doctor->getEspecialidad()=="Neurologia") {cout << *doctor << endl;} } }

    else if(op==2){
        cout<<"\n------- Datos de los doctores ------\n";
        for (auto & doctor: docs){
            if (doctor->getEspecialidad()=="Oftalmologia") {cout << *doctor << endl;} } }

    else if(op==3){
        cout<<"\n------- Datos de los doctores ------\n";
        for (auto & doctor: docs){
            if (doctor->getEspecialidad()=="Cirugia") {cout << *doctor << endl;} } }

    else if(op==4){
        cout<<"\n------- Datos de los doctores ------\n";
        for (auto & doctor: docs){
            if (doctor->getEspecialidad()=="Radiologia") {cout << *doctor << endl;} } }
    else {cout<<"Opcion incorrecta";}
}

void SacarCita(vector <CDoctor *> &docs){ //Info Dr //guardar info del paciente en el archivo del dr
    InfoDr(docs);
    string op2;
    cout<<"Ingresar codigo del doctor: "; cin>>op2;
    for (auto & doctor: docs){
        if (doctor->getCodigo()==op2){
            doctor->Asignar();
        }
    }
}

void Reporte(){ //mostrar especialidades //imprimir a los pacientes
    cout<<"\t\t      |   ++++++++++++ ESPECIALIDADES ++++++++++++    | \n"
          "\n1.Neurologia"
          "\n2.Oftalmologia"
          "\n3.Cirugia"
          "\n4.Radiologia"
          "\n\t\tEscoja una opcion: ";
    int op;
    cin>>op;
    if(op==1){CNeuro dr; dr.Pacientes();}
    else if(op==2){COftalmo dr; dr.Pacientes();}
    else if(op==3){CCiru dr; dr.Pacientes();}
    else if(op==4){CRadio dr; dr.Pacientes();}
    else {cout<<"Opcion incorrecta";}
}

#endif //HOSPITAAL_FUNCIONES_H
