#ifndef DESPESAS_H_INCLUDED
#define DESPESAS_H_INCLUDED

#include <string>

class Despesa{

 private:
         double valor;
         std:: string tipoDeGasto;


 public:

    Despesa();

    void setvalor(double v);
    void settipoDeGasto(std::string tp);

    double getvalor();
    std:: string gettipoDeGasto();




};





#endif // DESPESAS_H_INCLUDED
