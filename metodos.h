#include <iostream>
#include <math.h>
#include <queue>

#include <calcdialog.h>

class Funcao
{

public:
    //Retorna o resultado de F(x)
    double f (double a, double d);


    //retorna o resultado de F'(x).
    double fd (double a, double d);

};

//Armazena os valores de x, f(x) e b-a.
class Filas
{
public:
    std::queue<double>x;
    std::queue<double>fx;
    std::queue<double>ba;
    double resultado;
};

//calcula o intervalo
class Intervalo
{
public:
    std::vector<double> getIntervalo(double a);

};

class Newtonraphson
{
public:
	Funcao f;
	Filas fila;
    Filas newtonraphson(int tab, CalcDialog *calcDia, int escolha, int prec, double a, double xa, double xb, double e1, double e2);
};

class Posicaofalsa
{
public:
    Funcao f;
    Filas fila;

    Filas mpfalsa(int tab, CalcDialog *calcDia, int op, int prec, double a, double limiteInf, double limiteSup, double E1, double E2);
};

class Bisseccao
{
public:
    Funcao f;
    Filas fila;

    Filas bisseccao(int tab, CalcDialog *calcDia, int op, int prec, double a, double limiteInf, double limiteSup, double E1, double E2);
};
