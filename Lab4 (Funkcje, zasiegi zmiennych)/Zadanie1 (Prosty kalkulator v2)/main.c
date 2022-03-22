#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b;
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

    int dodawanie(int a,int b) {
        return a+b; }
    int odejmowanie(int a,int b) {
        return a-b; }
    int mnozenie(int a,int b) {
        return a*b; }
    float dzielenie(int a, int b) {
        return (float)a/b; }

    if (c==1)
    {
        printf("\nWynik dodawania: %d\n\n",dodawanie(a,b));
    }
    else if (c==2)
    {
        printf("\nWynik odejmowania: %d\n\n",odejmowanie(a,b));
    }
    else if (c==3)
    {
        printf("\nWynik mnozenia: %d\n\n",mnozenie(a,b));
    }
    else if (c==4)
    {
        if(b==0)
        {
            printf("\nNie mozna dzielic przez 0\n\n");
        }
        else
        {
            printf("\nWynik dzielenia: %f\n\n",dzielenie(a,b));
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
