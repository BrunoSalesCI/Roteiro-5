#include "Invoice.h"
#include <iostream>
#include <string>
using namespace std;


Invoice::Invoice(){}


void Invoice::inicio(float x, int y, std::string z, int n){

    void setpreco();
    void setquantidade();
    void setdescricao();
    void setnumero();


}

 float Invoice::getInvoiceAmount(){


         if(quantidade<0) {

            quantidade = 0;
            amount = quantidade*preco;
            return amount;

            } else if( preco <0){
                preco = 0.0;
                amount = quantidade*preco;

                return amount;

                } else{
                     amount = quantidade*preco;
                      return amount;
                 }

       }


            void Invoice:: setpreco( float x){
                     preco = x;
            }
            void Invoice:: setquantidade(int y){
                    quantidade = y;
            }
             void Invoice:: setdescricao(string z){
                    descricao = z;
             }
             void  Invoice:: setnumero(int n){
                    numero = n;

             }


              float Invoice::  getpreco(){

                        return preco;
                }
              int Invoice::  getquantidade(){

                        return quantidade;

                }
               string Invoice::   getdescricao(){

                        return descricao;

            }
                int Invoice::  getnumero(){
                       return numero;
                }
