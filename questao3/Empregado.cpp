#include"Empregado.h"
#include<string>
#include <iostream>

using namespace std;


Empregado::Empregado(){



}


        void Empregado:: setnome(std:: string n){
                    nome = n;

  }
        void Empregado:: setsobrenome (std::string so){
                    sobrenome = so;

        }
        void Empregado:: setsalario (float sa){
                    salario = sa;
        }

        std:: string Empregado:: getnome(){
                return nome;

        }
        std:: string Empregado:: getsobrenome(){
                return sobrenome;


        }
        float Empregado:: getsalario(){
                return salario;

        }


        float Empregado:: aumentaSalario(){
                aumento = (salario/100) * 10;

                salario = salario+aumento;

                return salario;

        }
