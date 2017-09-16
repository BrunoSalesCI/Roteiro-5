#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include <string>
#include "Despesa.h"


class ControleDeGastos : public Despesa
{
    public:

    ControleDeGastos();


            void setdespesas();

            double calculaTotalDeDespesas();

            bool existeDespesaDoTipo();


    protected:

              Despesa despesas [10];

    private:
};

#endif // CONTROLEDEGASTOS_H
