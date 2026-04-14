#include <stdio.h>

int main()
{
    float m, h, imc;
    scanf("%f %f", &m, &h);
    imc=m/(h*h);
    if(imc<18.5)
    printf("Abaixo do peso");
    if(18.5<=imc&&imc<25)
    printf("Peso normal");
    if(25<=imc&&imc<30)
    printf("Sobrepeso");
    if(30<=imc)
    printf("Obesidade");
}
