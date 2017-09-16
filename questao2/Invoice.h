#ifndef INVOICE_H
#define INVOICE_H

#include <string>


class Invoice
{
    public:

        Invoice();

       void inicio(float x, int y, std::string z, int n);

       float getInvoiceAmount();

            void setpreco( float x);
            void setquantidade(int y);
            void setdescricao(std::string z);
            void setnumero(int n);


            float getpreco();
            int getquantidade();
            std::string getdescricao();
            int getnumero();



    private:

    float preco;
    int quantidade;
    std::string descricao;
    int numero;
    float amount;


};

#endif // INVOICE_H
