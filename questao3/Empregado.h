#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED
#include<string>


class Empregado{

private:

            std:: string nome,sobrenome;
            float salario;
            float aumento;


public:

        Empregado();

        void setnome(std:: string n);
        void setsobrenome (std::string so);
        void setsalario (float sa);

        std:: string getnome();
        std:: string getsobrenome();
        float getsalario();

        float aumentaSalario();













};

#endif // EMPREGADO_H_INCLUDED
