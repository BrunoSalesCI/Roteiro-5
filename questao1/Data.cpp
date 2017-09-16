#include "Data.h"
#include<iostream>



Data::Data(){}


Data::Data(int d,int m,int a){

     d = dia;
     m = mes;
     a = ano;

}


int Data::avancarDia(){
    int n;


 if (dia<0){

        std::cout<< "dia invalido"<<std::endl; }

        else if( dia> 31){

            dia = dia - 31;
            mes = mes + 1;
            ano = ano;
        } else{
            dia = dia;
            mes = mes;
            ano = ano;

            }


 }


int     Data:: getDia(){
                return dia;
    }
    int     Data:: getMes(){
                return mes;
    }
    int     Data:: getAno(){
                return ano;
    }

    void    Data:: setDia(int d){
                dia = d;

    }
    void    Data:: setMes(int m){
                mes = m;

    }
    void    Data:: setAno(int a){
                ano = a;

    }

