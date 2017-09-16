#include <iostream>
#include <string>
#include "Despesa.h"
#include "ControleDeGastos.h"



using namespace std;

int main()
{

    ControleDeGastos objeto1 = ControleDeGastos();


        objeto1.setdespesas();

        cout<< objeto1.calculaTotalDeDespesas();
        cout<< objeto1.existeDespesaDoTipo();






}
