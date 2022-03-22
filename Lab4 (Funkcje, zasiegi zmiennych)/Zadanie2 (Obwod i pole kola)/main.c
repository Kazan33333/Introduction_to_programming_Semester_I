#include <stdio.h>
#include <stdlib.h>

float pi=3.14;

float obwod(float a)
{
    return 2*pi*a;
}
float pole(float a)
{
    return pi*a*a;
}
int main()
{
    float r;
    printf("Podaj promien kola aby obliczyc jego obwod i pole \n");
    scanf("\n%f",&r);
    printf("Obwod kola wynosi: %0.4f\n",obwod(r));
    printf("Pole kola wynosi: %0.4f\n",pole(r));
    system("pause");
    return 0;
}
