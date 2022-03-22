#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    printf("Wpisz dowolna liczbe rzeczywista, aby otrzymac zrzutowana liczbe calkowita: ");
    scanf("%f",&a);
    int b=a;
    printf("Zrzutowana liczba calkowita: ");
    printf("%d\n",b);
    system("pause");
    return 0;
}
