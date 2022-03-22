#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int i,n,b=0,a=0;
    printf("Podaj wielkosc tablicy: ");
    scanf("%d",&n);
    printf("\n");
    int *tablica;
    int *tablica2;
    tablica = (int*) malloc(n * sizeof(*tablica));
    for(i=0;i<n;i++)
    {
        tablica[i]=rand()%101+0;
        printf(" %d  ",tablica[i]);
    }
    for(i=0;i<n;i++)
    {
        if(tablica[i]%2==0)
            a++;
    }
    tablica2 = (int*) malloc(a * sizeof(*tablica2));
    printf("\n\nIlosc liczb parzystych: %d\n\n",a);
    for(i=0;i<a;i++)
    {
        if(tablica[i]%2==0)
        {
            tablica2[b]=tablica[i];
            b++;
        }
    }
    for(i=0;i<a;i++)
    {
        printf(" %d ",tablica2[i]);
    }
    system("pause");
    return 0;
}
