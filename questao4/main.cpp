#include <iostream>
#include<string>
#include"Pessoa.h"
#include <stdlib.h>

using namespace std;

int main()
{

    Pessoa();

    Pessoa serhumano1 = Pessoa("cicrano da silva");
    Pessoa serhumano2 = Pessoa("fulano da silva", "9998777665", 33);

    cout<< "teste 1 construtor -> \nnome : "<< serhumano1.getnome()<<endl;

    cout<<"\n\nteste 2 construtor -> \nnome: "<< serhumano2.getnome()<<"\n"<<"telefone:"<<serhumano2.gettelefone()<<"\n"<<"idade: "<<serhumano2.getidade()<<endl;



 system("pause");

return 0;
}
