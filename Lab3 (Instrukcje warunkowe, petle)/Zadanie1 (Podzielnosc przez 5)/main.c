#include <stdio.h>

int main()
{
    int a;
    printf("Podaj liczbe, aby sprawdzic czy jest podzielna przez 5: ");
    scanf("%d",&a);
    if (a % 5)
    {
        printf("Liczba nie jest podzielna przez 5\n");
    }
    else
    {
        printf("Liczba jest podzielna przez 5\n");
    }
    system("pause");
    return 0;
}
