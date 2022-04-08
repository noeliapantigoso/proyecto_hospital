
/////////////////////////SISTEMA DE MANEJO DE CITAS EN CLINICA//////////////////
#include <iostream>
#include <vector>
using namespace std;

#include "CAbstract.h"
#include "CPaciente.h"
#include "Funciones.h"
#include "CDoctor.h"
#include "CDoctores.h"

int main() {
    vector <CDoctor *> doctores;
    Iniciar(doctores);
    Menu(doctores);
    return 0;
}

