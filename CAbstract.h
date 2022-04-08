#ifndef HOSPITAAL_CABSTRACT_H
#define HOSPITAAL_CABSTRACT_H

class CPersona{
protected:
    string nombre;
    string apellido;
    int edad;
public:
    CPersona(){};
    CPersona(string pnombre, string papellido, int pedad): nombre(pnombre), apellido(papellido), edad(pedad){}
};

#endif //HOSPITAAL_CABSTRACT_H
