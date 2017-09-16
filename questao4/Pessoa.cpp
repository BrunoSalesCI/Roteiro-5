#include <iostream>
#include<string>
#include"Pessoa.h"

using namespace std;

 Pessoa:: Pessoa(){
 }

    Pessoa :: Pessoa(std::string n){
         setnome(n);
    }


        Pessoa:: Pessoa(std::string n, std::string tel,int i){



         setnome(n);
         settelefone(tel);
         setidade(i);


    }


    void Pessoa:: setnome(std::string n){
            nome = n;

    }
    void Pessoa:: settelefone(std::string tel){
        telefone = tel;

    }
    void Pessoa:: setidade (int i){
            idade = i;
    }


    std:: string Pessoa:: getnome(){
            return nome;

    }

    std:: string Pessoa:: gettelefone(){
            return telefone;

    }

    int Pessoa:: getidade(){
                return idade;

    }
