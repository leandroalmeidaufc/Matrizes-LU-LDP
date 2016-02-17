#include <iostream>
#include <math.h>
#include <queue>

#include <metodos.h>


//Numero max de lacos!
#define MAXIMO 500

//Retorna o resultado de F(x)
double Funcao::f (double a, double d)
{
    double fd1;
    fd1 = ( (a*d) - (d*log(d)) );
    return (fd1);
}


//retorna o resultado de F'(x).
double Funcao::fd (double a, double d )
{
    double fd1;
    fd1 = ( a - log(d) - 1 );
    return(fd1);
}

std::vector<double> Intervalo::getIntervalo(double a){
    std::vector<double> intervalo;

    intervalo.push_back(1);
    intervalo.push_back(2);

    Funcao f;
    double produto;
    double passo = 1.5;

    while(true){

        produto  = f.f(a, intervalo[0]) * f.f(a, intervalo[1]);

        if (produto < 0)
            return intervalo;

        intervalo[0] = intervalo[0] / passo;
        intervalo[1] = intervalo[1] * passo;
        passo += passo;

    }
}





Filas Newtonraphson::newtonraphson(int tab, CalcDialog *calcDia, int escolha, int prec, double a, double xa, double xb, double e1, double e2)
{
    double x0, x1;
    int linha=0;
    int controle = 0; //limitar o numero de passos

	x0 = (xa+xb)/2;
    x1 = x0; 

    calcDia->addInfo(tab, linha, 0, QString::number(x0, 'f', prec));
    calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, x0), 'f', prec));
    calcDia->addInfo(tab, linha, 2, "-");
    linha++;

    //1 = e1
    //2 = e2
    //3 = e1 && e2

	switch(escolha)
	{
        //sera usado e1
        case 1:
            controle = 0;
            do
            {
                x0 = x1;
                x1 = x0 - (f.f(a,x0)/ f.fd(a,x0) );
                fila.x.push(x1);
                fila.fx.push(f.f(a,x1));
                fila.ba.push(fabs(x1-x0));
                calcDia->addInfo(tab, linha, 0, QString::number(x1, 'f', prec));
                calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, x1), 'f', prec));
                calcDia->addInfo(tab, linha, 2, QString::number(fabs(x1-x0), 'f', prec));
                linha++;
                controle++;

            } while ( fabs(x1 - x0) > e1 && controle < MAXIMO );

            calcDia->resultFinal(tab, linha-1, 0);

            fila.resultado = x1;
            return fila;

        //sera usado e2
        case 2:
            controle = 0;
            if ( fabs(f.f(a,x0)) < e2)
			{
			    fila.x.push(x0); //colocando o valor na fila que armazenara os valores de x
			    fila.fx.push(f.f(a,x0)); //colocando o valor na fila que armazenara os valores de fx.
			    fila.resultado = x0;
				return fila;
			}

			do
			{
				x0 = x1;
				x1 = x0 - (f.f(a,x0)/ f.fd(a,x0) );
				fila.x.push(x1);
				fila.fx.push(f.f(a,x1));
                calcDia->addInfo(tab, linha, 0, QString::number(x1, 'f', prec));
                calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, x1), 'f', prec));
                calcDia->addInfo(tab, linha, 2, QString::number(fabs(x1-x0), 'f', prec));
                linha++;
                controle++;

            } while (fabs(f.f(a,x1)) > e2 && controle < MAXIMO);

            calcDia->resultFinal(tab, linha-1, 0);

            fila.resultado = x1;
			return fila;

		//sera usado e1 & e2
        case 3:
            controle = 0;
			do
			{
				x0 = x1;
				x1 = x0 - (f.f(a,x0)/ f.fd(a,x0) );
				fila.x.push(x1);
				fila.fx.push(f.f(a,x1));
				fila.ba.push(fabs(x1-x0));
                calcDia->addInfo(tab, linha, 0, QString::number(x1, 'f', prec));
                calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, x1), 'f', prec));
                calcDia->addInfo(tab, linha, 2, QString::number(fabs(x1-x0), 'f', prec));
                linha++;
                controle++;

            } while ( ((fabs(x1 - x0) > e1) || (fabs(f.f(a,x1)) > e2)) && controle < MAXIMO );

            calcDia->resultFinal(tab, linha-1, 0);

            fila.resultado = x1;
			return fila;

    }

    calcDia->resultFinal(tab, linha-1, 0);
    return fila;
}

Filas Posicaofalsa::mpfalsa(int tab, CalcDialog *calcDia, int op, int prec, double a, double limiteInf, double limiteSup, double E1, double E2) 
{
    double passo=0,r,Fli,Fls;
    int linha=0;

    Fli=f.f(a,limiteInf);
    Fls=f.f(a,limiteSup);

    switch(op) 
    {
        case 1:
        passo = 0;
            do 
            {
                Fli=f.f(a,limiteInf);
                Fls=f.f(a,limiteSup);
                r=((limiteInf*Fls)-(limiteSup*Fli))/(Fls-Fli);

                fila.x.push(r);
                fila.fx.push(f.f(a,r));
                fila.ba.push(limiteSup-limiteInf);

                calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
                calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
                calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
                linha++;

                if (f.f(a,r)>0) 
                {
                    if (Fli<0) 
                    {
                        limiteSup=r;
                    }
                    if (Fls<0) 
                    {
                        limiteInf=r;
                    }
                }
                else 
                {
                    if (Fli>0) 
                    {
                        limiteSup=r;
                    }
                    if (Fls>0) 
                    {
                        limiteInf=r;
                    }
                }
                passo++;
            } while((limiteSup-limiteInf)>E1 && passo < MAXIMO);

            fila.resultado = r;
            break;

        case 2:
            passo = 0;
            if (fabs(Fli)<E2) 
            {
                r=limiteInf;
                fila.x.push(r);
                fila.fx.push(f.f(a,r));
                fila.ba.push(limiteSup-limiteInf);

                calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
                calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
                calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
                linha++;
                passo++;

            }
            else 
            {
                if (fabs(Fls)<E2) 
                {
                    r=limiteSup;
                    fila.x.push(r);
                    fila.fx.push(f.f(a,r));
                    fila.ba.push(limiteSup-limiteInf);

        			calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
        			calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
        			calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
        			linha++;

                }
                else
                {
                    do 
                    {
                        Fli=f.f(a,limiteInf);
                        Fls=f.f(a,limiteSup);
                        r=((limiteInf*Fls)-(limiteSup*Fli))/(Fls-Fli);
                        fila.x.push(r);
                        fila.fx.push(f.f(a,r));
                        fila.ba.push(limiteSup-limiteInf);

	                    calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
	                    calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
	                    calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
	                    linha++;

                        if (f.f(a,r)>0) 
                        {
                            if (Fli<0) 
                            {
                               limiteSup=r;
                            }
                            if (Fls<0) 
                            {
                                limiteInf=r;
                            }
                        }
                        else 
                        {
                            if (Fli>0) 
                            {
                                limiteSup=r;
                            }
                            if (Fls>0) 
                            {
                                limiteInf=r;
                            }
                        }
                        passo++;
                    } while(fabs(f.f(a,r))>E2 && passo < MAXIMO );
                }
            }

            fila.resultado = r;
            break;

        case 3:
        passo = 0;
            if (fabs(Fli)<E2)
            {
                r=limiteInf;
                fila.x.push(r);
                fila.fx.push(f.f(a,r));
                fila.ba.push(limiteSup-limiteInf);

                calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
                calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
                calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
                linha++;
                passo++;

            }
            else 
            {
                if (fabs(Fls)<E2)
                {
                    r=limiteSup;
                    fila.x.push(r);
                    fila.fx.push(f.f(a,r));
                    fila.ba.push(limiteSup-limiteInf);

                	calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
                	calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
                	calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
                	linha++;

                }
                else
                {
                    do 
                    {
                        Fli=f.f(a,limiteInf);
                        Fls=f.f(a,limiteSup);
                        r=((limiteInf*Fls)-(limiteSup*Fli))/(Fls-Fli);

                        fila.x.push(r);
                        fila.fx.push(f.f(a,r));
                        fila.ba.push(limiteSup-limiteInf);

                        calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
                        calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
                        calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
                        linha++;

                        if (f.f(a,r)>0) 
                        {
                            if (Fli<0) 
                            {
                               limiteSup=r;
                            }
                            if (Fls<0) 
                            {
                                limiteInf=r;
                            }
                        }
                        else 
                        {
                            if (Fli>0) 
                            {
                                limiteSup=r;
                            }
                            if (Fls>0) 
                            {
                                limiteInf=r;
                            }
                        }
                        passo++;
                    } while((((limiteSup-limiteInf)>E1) || (fabs(f.f(a,r))>E2)) && passo < MAXIMO);
                }
            }

            fila.resultado = r;
            break;
    }

    calcDia->resultFinal(tab, linha-1, 0);

    return fila;
}


// r é a raiz
// passo é o número de passos do laço



Filas Bisseccao::bisseccao(int tab, CalcDialog *calcDia, int op, int prec, double a, double limiteInf, double limiteSup, double E1, double E2)
{
    double r,Fli,Fls;
    int linha = 0;
    int controle;

    Fli=f.f(a,limiteInf);
    Fls=f.f(a,limiteSup);

    switch(op) 
    {
    case 1:
        controle = 0;
        do 
        {
            r=(limiteInf+limiteSup)/2;
            Fli=f.f(a,limiteInf);
            Fls=f.f(a,limiteSup);

            fila.x.push(r);
            fila.fx.push(f.f(a,r));
            fila.ba.push(limiteSup-limiteInf);

            calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
            calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
            calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
            linha++;

            if (f.f(a,r)>0) 
            {
                if (Fli<0) 
                {
                    limiteSup=r;
                }
                if (Fls<0) 
                {
                    limiteInf=r;
                }
            }
            else
            {
                if (Fli>0) 
                {
                    limiteSup=r;
                }
                if (Fls>0) 
                {
                    limiteInf=r;
                }
            }
            controle++;

        } while(fabs(limiteSup-limiteInf)>=E1 && controle < MAXIMO);

        fila.resultado = r;

        break;

    case 2:
    controle = 0;
        if (fabs(Fli)<E2)
        {
            r=limiteInf;

            fila.x.push(r);
            fila.fx.push(f.f(a,r));
            fila.ba.push(limiteSup-limiteInf);
            fila.resultado = r;

            calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
            calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
            calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
            linha++;
            controle++;

        }
        else 
        {
            if (fabs(Fls)<E2)
            {
                r=limiteSup;

                fila.x.push(r);
                fila.fx.push(f.f(a,r));
                fila.ba.push(limiteSup-limiteInf);

                calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
                calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
                calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
                linha++;
                controle++;

                fila.resultado = r;

            }
            else
            {
                do 
                {
                    r=(limiteInf+limiteSup)/2;
                    Fli=f.f(a,limiteInf);
                    Fls=f.f(a,limiteSup);

                    fila.x.push(r);
                    fila.fx.push(f.f(a,r));
                    fila.ba.push(limiteSup-limiteInf);

                    calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
                    calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
                    calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
                    linha++;

                    if (f.f(a,r)>0) 
                    {
                        if (Fli<0) 
                        {
                            limiteSup=r;
                        }
                        if (Fls<0) 
                        {
                            limiteInf=r;
                        }
                    }
                    else 
                    {
                        if (Fli>0) 
                        {
                        limiteSup=r;
                        }
                        if (Fls>0) 
                        {
                            limiteInf=r;
                        }
                    }
                    controle++;
                } while(fabs(f.f(a,r))>E2 && controle < MAXIMO);
            }
        }

        fila.resultado = r;

        break;

    case 3:
    controle = 0;
        if (fabs(Fli)<E2)
        {
            r=limiteInf;

            fila.x.push(r);
            fila.fx.push(f.f(a,r));
            fila.ba.push(limiteSup-limiteInf);

            calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
            calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
            calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
            linha++;
            controle++;

            fila.resultado = r;
        }
        else 
        {
            if (fabs(Fls)<E2)
            {
                r=limiteSup;

                fila.x.push(r);
                fila.fx.push(f.f(a,r));
                fila.ba.push(limiteSup-limiteInf);

                calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
                calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
                calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
                linha++;
                controle++;
                fila.resultado = r;
            }
            else
            {
                do 
                {
                    r=(limiteInf+limiteSup)/2;
                    Fli=f.f(a,limiteInf);
                    Fls=f.f(a,limiteSup);

                    fila.x.push(r);
                    fila.fx.push(f.f(a,r));
                    fila.ba.push(limiteSup-limiteInf);

                    calcDia->addInfo(tab, linha, 0, QString::number(r, 'f', prec));
                    calcDia->addInfo(tab, linha, 1, QString::number(f.f(a, r), 'f', prec));
                    calcDia->addInfo(tab, linha, 2, QString::number(fabs((limiteSup-limiteInf)), 'f', prec));
                    linha++;

                    if (f.f(a,r)>0) 
                    {
                        if (Fli<0) 
                        {
                            limiteSup=r;
                        }
                        if (Fls<0) 
                        {
                            limiteInf=r;
                        }
                    }
                    else 
                    {
                        if (Fli>0) 
                        {
                        limiteSup=r;
                        }
                        if (Fls>0) 
                        {
                            limiteInf=r;
                        }
                    }
                    controle++;
                } while((((limiteSup-limiteInf)>E1) || (fabs(f.f(a,r))>E2)) && controle < MAXIMO) ;
            }
        }

        fila.resultado = r;

        break;
    }

    calcDia->resultFinal(tab, linha-1, 0);
    return fila;
}
