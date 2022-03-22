#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b;
    printf("Aby policzyc powierzchnie pokoju podaj (w metrach): \nDlugosc pokoju: ");
    scanf("%f",&a);
    printf("Oraz szerokosc pokoju: ");
    scanf("%f",&b);
    printf("Pole powierzchni pokoju wynosi: ");
    printf("%0.2f\n",a*b);
    system("pause");
    return 0;
}
