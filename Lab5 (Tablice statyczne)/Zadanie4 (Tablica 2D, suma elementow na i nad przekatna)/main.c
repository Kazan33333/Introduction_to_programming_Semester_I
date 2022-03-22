#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[6][6]={{8,12,9,4,1,6},
                       {6,9,17,15,8,5},
                       {5,3,5,12,8,18},
                       {7,15,0,6,4,9,1},
                       {2,7,13,7,5,6},
                       {3,24,1,8,4,7}};
    int i,j;
    int suma=0;
    for(i=0;i<6;++i)
    {
        for(j=0;j<6;++j)
        {
            printf("%4d", tablica[i][j]);
        }
        printf("\n\n");
    }
    for(i=0;i<6;++i)
    {
        for(j=0;j<6;++j)
        {
            if(i<=j)
            {
                suma=suma+tablica[i][j];
            }
        }
    }
    printf("Suma elementow lezacych na przekatnej (poprowadzona z lewego gornego rogu) oraz nad nia wynosi %d\n\n",suma);
    system("pause");
    return 0;
}

