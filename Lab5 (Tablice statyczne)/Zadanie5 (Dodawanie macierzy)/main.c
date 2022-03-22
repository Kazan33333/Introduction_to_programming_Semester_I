#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    do{
    printf("Program dodajacy dwie macierze\n\n");
    printf("Podaj wymiary macierzy: \n");
    scanf("%d%d",&a,&b);
    }while(a<=0 || b<=0);

    int macierz1[a][b], macierz2[a][b], macierz3[a][b];

    printf("Podaj elementy pierwszej macierzy: \n");

    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            scanf("%d", &macierz1[i][j]);
        }
    }

    printf("Podaj elementy drugiej macierzy: \n");

    for(int i=0;i<a;++i){
        for(int j=0; j<b; ++j){
            scanf("%d", &macierz2[i][j]);
        }
    }

    printf("Suma macierzy: \n");

    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            macierz3[i][j]=macierz1[i][j]+macierz2[i][j];
            printf("%d",macierz3[i][j]);
            printf(" ");
        }
        printf("\n\n");
    }

    system("pause");
    return 0;
}
