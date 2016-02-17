class LDP {

private:
    int n;
    double **a;
    double **l;
    double **d;
    double **p;
    double *b;
    double *y;
    double *s;
    double *x;
    void calcular();

public:
    LDP(double **a, int n);
    ~LDP();
    double** getL();
    double** getD();
    double** getP();
    double* resolver(double *b);
};




