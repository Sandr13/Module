#include "cFuncs.h"

double _areaOfTriangle(int a, int b, int c)
{
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

double _arifmsum(int a1, int d, int n)
{
    return (2 * a1 + d * (n - 1)) * n / 2;
}

double _geomsum(int b1, int q, int n)
{
    return b1 * (pow(q, n) - 1) / (q - 1);
}

double _circlelen(int r)
{
    return 2 * 3.14 * r;
}

double _circlearea(int r)
{
    return 3.14 * pow(r, 2);
}
