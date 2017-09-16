#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

class Data{

public:
    int dia;
    int mes;
    int ano;

    Data(int d,int m,int a);

    Data();

    int avancarDia();



    int getDia();
    int getMes();
    int getAno();

    void setDia(int d);
    void setMes(int m);
    void setAno(int a);
};






#endif // DATA_H_INCLUDED
