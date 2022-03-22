#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a,b,suma=0;
    printf("Aby policzyc sume liczb parzystych zakresu podaj pierwsza i ostatnia liczbe zakresu: \n");
    scanf("%d%d",&a,&b);
    if (a%2==0)
    {
        for (i=a;i<=b;i+=2)
        suma+=i;
    }
    else
    {
        for (i=a+1;i<=b;i+=2)
        suma+=i;
    }
    printf("Suma liczb parzystych podanego zakresu wynosi ");
    printf("%d\n",suma);
    system("pause");
    return 0;
}
