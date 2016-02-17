#include "LDP.h"
#include "LU.h"

LDP::LDP(double **a, int n)
{
	this->a = a;
	this->n = n;
	this->calcular();
}

LDP::~LDP() {
    for(int i = 0; i < n; i++) {
        delete [] l[i];
        delete [] d[i];
        delete [] p[i];
    }

    delete l;
    delete d;
    delete p;
    delete y;
    delete s;
    delete x;
}

void LDP::calcular()
{
	int i, j;
	double **u;

	//criando as matrizes e vetores
	LU *lu = new LU(a, n);

	l = lu->getL();
	u = lu->getU();
	d = new double*[n];
	p = new double*[n];
	y = new double[n];
	s = new double[n];
	x = new double[n];

	for(int i = 0; i < n; i++)
	{
		d[i] = new double[n];
		p[i] = new double[n];
	}

	//zerando as matrizes
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			d[i][j] = 0;
			p[i][j] = 0;
		}
	}

	//zerando os vetores
	for(i=0;i<n;i++)
	{
		y[i] = 0;
		s[i] = 0;
		x[i] = 0;
	}

	//calculando D.
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            if (i == j)
                d[i][j] = u[i][j];
            else
                d[i][j] = 0;
        }
    }

	//calculando P.
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
//            if (i<=j)
                p[i][j] = (u[i][j])/(u[i][i]);
        }
    }

}

double** LDP::getL()
{
	return l;
}

double** LDP::getD()
{
	return d;

}

double** LDP::getP()
{
	return p;

}

double* LDP::resolver(double *b)
{
    int i, j;
    double E;

    //Calculando L*s = b.
    for(i=0; i<n; i++){

        E = 0;
        if (i!=0){
            for(j=0; j<i; j++){
                E = E + (l[i][j] * s[j]);
            }
        }
        s[i] = b[i] - E;
    }

    //Calculando D*y = s.
    for(i=0; i<n; i++)
        y[i] = s[i] / d[i][i];

    //Calculando P*x = y.
    for(i=n-1; i>=0; i--){
        E = 0;
        if (i != n-1){
            for(j=n-1; j>=i; j--){
                E = E + (p[i][j] * x[j]);
            }
        }
        x[i] = y[i] - E;
    }

    return x;

}
