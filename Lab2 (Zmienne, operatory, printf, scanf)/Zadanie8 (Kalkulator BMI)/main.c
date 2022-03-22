#include <stdio.h>
#include <stdlib.h>

int main()
{
    int waga;
    float wzrost;
    printf("Kalkulator BMI\n");
    printf("\nPodaj swoj wzrost (w metrach): ");
    scanf("%f",&wzrost);
    printf("Podaj swoja wage (w kilogramach): ");
    scanf("%d",&waga);
    printf("\nTwoj wspolczynnik BMI wynosi: %0.2f\n",(waga/(wzrost*wzrost)));
    printf("\nZakresy wartosci BMI: \n");
    printf("< 16 - wyglodzenie\n");
    printf("16 - 16.99 - wychudzenie\n");
    printf("17 - 18.49 - niedowaga\n");
    printf("18.5 - 24.99 - wartosc prawidlowa\n");
    printf("25 - 29.99 - nadwaga\n");
    printf("30 - 34.99 - I stopien otylosci\n");
    printf("35 - 39.99 - II stopien otylosci\n");
    printf("> 40 - otylosc skrajna\n");
    system("pause");
    return 0;
}
