#include "Despesa.h"

#include <iostream>
#include <string>

using namespace std;


    Despesa:: Despesa(){


}

    void Despesa:: setvalor(double v){
        valor = v;

    }
    void Despesa:: settipoDeGasto(std::string tp){
        tipoDeGasto = tp;

    }

    double Despesa:: getvalor(){
        return valor;

    }
    std:: string Despesa:: gettipoDeGasto(){
        return tipoDeGasto;

    }

