#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Program podnoszacy podana liczbe do potegi rownej ilosci cyfr w liczbie \n\n");
    int a;
    printf("Podaj liczbe: ");
    scanf("%d",&a);
    int b=log10(a)+1;
    int x=pow(a,b);
    printf("Wynik: %d\n\n",x);
    system("pause");
    return 0;
}
