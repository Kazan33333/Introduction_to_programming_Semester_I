#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,x;
    int c;
    while(1) {

    printf("Prosty kalkulator liczb calkowitych\n\n");
    printf("Podaj pierwsza liczbe: ");
    scanf("%f",&a);
    printf("Podaj druga liczbe: ");
    scanf("%f",&b);
    printf("Wybierz dzialanie: \n Dodawanie - 1 \n Odejmowanie - 2 \n Mnozenie - 3 \n Dzielenie - 4 \n");
    printf("Wpisz cyfre 1-4: ");
    scanf("%d",&c);
    if (c==1)
    {
        x=a+b;
        printf("\nWynik dodawania: %0.0f\n\n",x);
    }
    else if (c==2)
    {
        x=a-b;
        printf("\nWynik odejmowania: %0.0f\n\n",x);
    }
    else if (c==3)
    {
        x=a*b;
        printf("\nWynik mnozenia: %0.0f\n\n",x);
    }
    else if (c==4)
    {
        if(b==0)
        {
            printf("\nNie mozna dzielic przez 0\n\n");
        }
        else
        {
            x=a/b;
            printf("\nWynik dzielenia: %f\n\n",x);
        }
    }
    else
    {
        printf("\nNiepoprawne dzialanie \n\n");
    }
    system("pause");
    system("cls");
    }
return 0;
}
