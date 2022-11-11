#include <stdio.h>
//#include <math.h>

double media_sommatoria(int n, double* h)
{
    double l = 0;
    for (int i = 0; i < n; i++)
    {
        l = l + *(h + i);
    }
    l = l / n;
    return l;
}

double sommatoria(int n, double* h)
{
    double m = 0;
    double z = media_sommatoria(n, h);

    for (int i = 0; i < n; i++)
    {
        double k = *(h + i) - z;
        k = k * k;
        m = m + k;
    }
    return m / n;
}

void scan(double* h, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Insert numbers of vector x_%d: ",i+1);
        scanf("%lf", h + i);
    }
}

int main()
{
    double v[5];
    double* h = &v[0];
    int n = 5;

    scan(h, n);

    double k = sommatoria(n, h);

    printf("valore di k finale: %lf\n", k);

    return 0;
}