#include "LU.h"

LU::LU(double **a, int n)
{
	this->a = a;
	this->n = n;
	this->calcular();
}

LU::~LU() {
    for(int i = 0; i < n; i++) {
        delete [] l[i];
        delete [] u[i];
    }

    delete l;
    delete u;
    delete y;
    delete x;
}

void LU::calcular()
{
	int i, j, k;
    double M, **m;

	//criando as matrizes

	l = new double*[n];
	u = new double*[n];
	m = new double*[n];
	y = new double[n];
	x = new double[n];


	for(int i = 0; i < n; i++)
	{
		l[i] = new double[n];
		u[i] = new double[n];
		m[i] = new double[n];

	}

	//zerando as matrizes
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			l[i][j] = 0;
			u[i][j] = 0;
			m[i][j] = 0;
		}
	}

	//zerando os vetores
	for(i=0;i<n;i++)
	{
		y[i] = 0;
		x[i] = 0;
	}

	//calculando U.
	for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            u[i][j]=a[i][j];
        }
    }

    for(j=0;j<n-1;j++)
    {
        for(i=j+1;i<n;i++)
        {
            M = u[i][j] / u[j][j];
            u[i][j] = 0;
            m[i][j] = M;
            for(k=j+1;k<n;k++)
            {
                u[i][k] = u[i][k] - (M * u[j][k]);
            }
        }
    }

    //calculando L.
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                l[i][j] = 1;
            }
            else
            {
                if(i>j)
                {
                    l[i][j] = m[i][j];
                }
            }

        }
    }

    for(int i = 0; i < n; i++) {
        delete [] m[i];
    }

    delete m;

}

double** LU::getL()
{
	return l;
}

double** LU::getU()
{
    return u;

}

double* LU::resolver(double *b)
{
    int i, j;

    //Calculando L*y = b.
    for(i=0; i<n; i++)
    {
        y[i]=b[i];
        for(j=0; j<i; j++)
        {
            y[i]-=l[i][j]*y[j];
        }
    }
 
    //Calculando U*x = y.
    for(i=n-1; i>=0; i--)
    {
        x[i]= y[i];
        for(j=i+1; j<n; j++)
        {
            x[i]-=u[i][j]*x[j];
        }
        x[i]/=u[i][i];
    }

    return x;
}
