#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int i,n,max,min;
    printf("Podaj wielkosc tablicy: ");
    scanf("%d",&n);
    printf("\n");
    int *tablica;
    tablica = (float*) malloc(n * sizeof(*tablica));
    for(i=0;i<n;++i)
    {
        tablica[i]=rand()%101+0;
        printf(" %d  ",tablica[i]);
    }
    for(i=0;i<n;++i)
    {
        if(tablica[i]>max)
        {
            max=tablica[i];
        }
    }
    printf("\n\nNajwiekszy element tablicy wynosi %d",max);
    for(i=0;i<n;++i)
    {
        if(tablica[i]<min)
        {
            min=tablica[i];
        }
    }
    printf("\nNajmniejszy element tablicy wynosi %d\n\n",min);
    system ("pause");
    return 0;
}
