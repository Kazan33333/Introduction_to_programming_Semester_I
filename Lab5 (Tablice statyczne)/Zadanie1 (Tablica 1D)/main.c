#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tablica[7]={3,5,9,8,4,1,6};
    int i;

    for(i=0;i<7;i++)
    {
        printf("%3d",tablica[i]);
    }
    printf("\n\n");
    system("pause");
    return 0;
}
