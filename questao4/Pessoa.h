#ifndef PESSOA_H_INCLUDED
#define PESSOA_H_INCLUDED
#include<string>


class Pessoa{

private:
std:: string nome;
std:: string telefone;
int idade;

public:
    Pessoa();
    Pessoa(std::string n);
    Pessoa(std::string n, std::string tel,int i);


    void setnome(std::string n);
    void settelefone(std::string tel);
    void setidade (int i);

    std:: string getnome();
    std:: string gettelefone();
    int getidade();






};

#endif // PESSOA_H_INCLUDED
