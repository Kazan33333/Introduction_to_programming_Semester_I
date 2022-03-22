#include <stdio.h>
#include <stdlib.h>

void modyfikuj (int *a)
{
    *a=5;
}

int main()
{
    int x;
    printf("Podaj liczbe: ");
    scanf("%d",&x);
    printf("\nLiczba przed zamiana: %d\n",x);
    modyfikuj(&x);
    printf("Liczba po zamianie: %d\n\n",x);
    system("pause");
    return 0;
}
