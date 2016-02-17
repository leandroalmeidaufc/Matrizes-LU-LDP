class LU {

private:
    int n;
    double **a;
    double **l;
    double **u;
    double *b;
    double *y;
    double *x;
    void calcular();

public:
    LU(double **a, int n);
    ~LU();
    double** getL();
    double** getU();
    double* resolver(double *b);
};




