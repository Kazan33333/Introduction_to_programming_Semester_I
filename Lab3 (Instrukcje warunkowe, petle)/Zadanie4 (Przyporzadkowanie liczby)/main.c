#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Podaj liczbe calkowita: \n");
    scanf("%d",&a);
    if (a<0)
    {
        printf("Liczba ujemna\n");
    }
    else if (a<10)
    {
        printf("Liczba jednocyfrowa\n");
    }
    else if (a<100)
    {
        printf("Liczba dwucyfrowa\n");
    }
    else
    {
        printf("Liczba pozostala\n");
    }
    system("pause");
    return 0;
}
