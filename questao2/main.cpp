#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;


int main()
{

    Invoice objeto1 = Invoice();


    objeto1.setpreco(3.5);
    objeto1.setdescricao("sabonete");
    objeto1.setnumero(1);
    objeto1.setquantidade(-5);





    cout<<"Codigo do produto:   " << objeto1.getnumero()<<endl;
    cout<<"Descricao:           " << objeto1.getdescricao()<<endl;
    cout<<"Quantidade:          "<< objeto1.getquantidade()<<endl;
    cout<<"Preco:               "<< objeto1.getpreco()<<endl;
    cout<<"VALOR TOTAL:         "<<objeto1.getInvoiceAmount()<<endl;



    return 0;
}
