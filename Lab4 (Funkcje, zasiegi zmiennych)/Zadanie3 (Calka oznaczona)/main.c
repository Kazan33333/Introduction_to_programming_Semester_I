#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double calka(double x, double y)
{
    return -cos(x)+sin(x)+0.5*sin(2*x)+0.11111*x+cos(y)-sin(y)-0.5*sin(2*y)-0.11111*y;
}

int main()
{
    double a,b;
    printf("Program oblicza wartosc calki oznaczonej dla wyrazenia sin(x)+cos(x)+cos(2x)+1/9\n\n");
    printf("Podaj dolna granice calkowania: ");
    scanf("%lf",&b);
    printf("Podaj gorna granice calkowania: ");
    scanf("%lf",&a);
    printf("Wartosc calki wynosi %lf\n",calka(a,b));
    system("pause");
    return 0;
}
