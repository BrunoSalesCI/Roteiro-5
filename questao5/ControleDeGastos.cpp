#include "ControleDeGastos.h"
#include <iostream>
#include <string>
#include "Despesa.h"




using namespace std;


int i = 0, n = 5;


ControleDeGastos::ControleDeGastos()
{
    //ctor
}


    void ControleDeGastos:: setdespesas(){

         string tipo;
         double val;

            for(int i = 0; i<n; i++){

            cout<< "Qual a descricao da despesa?"<<endl;

            cin>>tipo;

            cout<< "Qual o valor despesa?"<<endl;

            cin>>val;


            despesas[i].settipoDeGasto(tipo);
            despesas[i].setvalor(val);



        }


            }

    double ControleDeGastos:: calculaTotalDeDespesas(){
            int soma =0;

                    for(int i = 0; i<n; i++){

                    soma += despesas[i].getvalor();
                }
                    cout<< "\n O valor total eh :"<< soma << endl;
    }

    bool ControleDeGastos:: existeDespesaDoTipo(){

            string tipodedespesa;

            cout<< "\n Digite o tipo de despesa que deseja procurar\n"<<endl;

            cin>>tipodedespesa;

            for(i = 0; i< n ; i++){

                if (tipodedespesa==despesas[i].gettipoDeGasto()){
                    cout << "\nExiste ao menos uma depesa com essa descricao\n";
                    return true;
                }else{
                    cout << "\nNao existe despesa com essa descricao\n";
                    return false;
            }
    }

    }
