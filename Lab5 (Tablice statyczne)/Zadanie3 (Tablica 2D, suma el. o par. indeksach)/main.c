#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[5][8]={{5,8,11,7,2,6,1,2},
                       {4,9,1,2,9,3,4,5},
                       {3,6,5,4,8,18,7,2},
                       {7,15,20,5,4,9,12,6,1},
                       {6,2,13,7,5,25,0,8}};
    int i,j;
    int suma=0;
    for(i=0;i<5;++i)
    {

        for(j=0;j<8;++j)
        {
            printf("%4d", tablica[i][j]);
        }
        printf("\n\n");
    }
    for(i=0;i<5;++i)
    {
        for(j=0;j<8;j=j+2)
        {
            suma=suma+tablica[i][j];
        }
    }
    printf("Suma elementow o parzystych indeksach wynosi %d\n\n",suma);
    system("pause");
    return 0;
}



