#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Podaj numer dnia tygodnia (poniedzialek - 1 itd.)\n");
    scanf("%d",&a);
    switch (a)
    {
        case 1: printf("Poniedzialek\n");
        break;
        case 2: printf("Wtorek\n");
        break;
        case 3: printf("Sroda\n");
        break;
        case 4: printf("Czwartek\n");
        break;
        case 5: printf("Piatek\n");
        break;
        case 6: printf("Sobota\n");
        break;
        case 7: printf("Niedziela\n");
        break;
    }
    system("pause");
    return 0;
}
