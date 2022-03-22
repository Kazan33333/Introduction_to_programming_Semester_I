#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int tablica[50];
    int i;
    for(i=0;i<50;++i)
    {
        tablica[i]=rand()%100+1;
        printf("%2d ",tablica[i]);
    }
    int suma=0;
    for(i=0;i<50;++i)
    {
        suma=suma+tablica[i];
    }
    float srednia=suma*0.02;
    printf("\n\nSrednia arytmetyczna liczb w tablicy wynosi %0.3f",srednia);
    printf("\n\n");
    system("pause");
    return 0;
}
