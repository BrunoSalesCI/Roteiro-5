#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    Data d1;
    d1.dia = 56;
    d1.mes = 3;
    d1.ano = 2017;

            cout<< "data inserida"<<endl;
            cout<< d1.dia<<"/"<<d1.mes<<"/"<<d1.ano<<endl;


            cout<<"-------------------------------------"<<endl;



    d1.avancarDia();


            cout<< "data corrigida"<<endl;

            cout<< d1.dia<<"/"<<d1.mes<<"/"<<d1.ano<<endl;


    d1.setDia(37);
    d1.setMes(7);
    d1.setAno(3700);



                cout<<"-------------------------------------"<<endl;

                cout<< "data inserida"<<endl;


                cout<< d1.getDia()<<"/"<<d1.getMes()<<"/"<<d1.getAno()<<endl;

    d1.avancarDia();


                    cout<<"-------------------------------------"<<endl;
                    cout<< "data corrigida"<< endl;

                    cout<< d1.getDia()<<"/"<< d1.getMes()<<"/"<<d1.getAno()<<endl;


    return 0;
}
