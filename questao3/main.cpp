#include <iostream>
#include<string>
#include"Empregado.h"
#include<stdlib.h>

using namespace std;

int main()
{

    Empregado pessoa01 = Empregado();

    pessoa01.setnome("carlao");
    pessoa01.setsobrenome("do pao");
    pessoa01.setsalario(950.00);

    cout<< "Nome do Trabalhador:  "<< pessoa01.getnome()<<" "<<pessoa01.getsobrenome()<<endl;
    cout<< "Salario mensal:  " << pessoa01.getsalario()<<endl;


    pessoa01.aumentaSalario();

    cout<<"Salario com aumento:  "<< pessoa01.getsalario()<<endl;

    system("PAUSE");
    return 0;
}
