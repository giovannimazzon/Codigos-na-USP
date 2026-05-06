#include <stdio.h>
double pot(double base, int exp) 
{
    double resultado = 1.0;
    if (exp == 0) return 1.0;

    for (int i = 0; i < exp; i++) 
    {
        resultado *= base;
    }
    
    return resultado;
}
double fatorial(int n) 
{
    double f = 1.0;
    for (int i = 1; i <= n; i++) 
    f *= i;
    return f;
}

int main() {
    double x;
    int n;
    if (scanf("%lf %d", &x, &n) != 2) return 0;
    double soma = 0.0;
    for (int i = 0; i < n; i++) 
    {
        double termo;
        if (i == 0)
        termo = x;
        else 
        {
            int expoente = 2 * i;
            int fat = 2 * i + 1;       
            termo = pot(x, expoente) / fatorial(fat);
            if (i % 2 != 0)
            termo *= -1;
        }
        soma += termo;
    }
    printf("%.10lf\n", soma);
}