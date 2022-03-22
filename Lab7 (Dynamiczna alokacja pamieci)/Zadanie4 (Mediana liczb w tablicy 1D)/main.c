#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int n;
    float x;
    printf("Podaj dlugosc tablicy: ");
    scanf("%d",&n);
    float tablica[n];
    printf("\n");
    for(int i=0;i<n;++i)
    {
        tablica[i]=rand()%+101+0;
        printf(" %0.0f  ",tablica[i]);
    }

    if(n%2==1)
    {
        x=tablica[n/2];
        printf("\n\nMediana wynosi %0.1f\n\n",x);
    }
    else
    {
        x=(tablica[(n-1)/2]+tablica[(n+1)/2])/2;
        printf("\n\nMediana wynosi %0.1f\n\n",x);
    }
    system("pause");
    return 0;
}
