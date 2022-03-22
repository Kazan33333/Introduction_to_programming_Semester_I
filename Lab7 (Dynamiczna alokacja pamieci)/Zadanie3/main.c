#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(time(NULL));
    int a,b;
    do{
    printf("Program dodajacy dwie macierze\n\n");
    printf("Podaj wymiary macierzy: \n");
    scanf("%d%d",&a,&b);
    }while(a<=0 || b<=0);

    int macierz1[a][b], macierz2[a][b], macierz3[a][b];
    macierz1=(int*)malloc(a*b*sizeof(*macierz1));
    macierz2=(int*)malloc(a*b*sizeof(*macierz2));

    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            macierz1[i][j]=rand()%10+0;
            printf("%3d",macierz1[i][j]);
            printf(" ");
        }
    }
    printf("\n\n");

    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            macierz2[i][j]=rand()%10+0;
            printf("%3d",macierz2[i][j]);
            printf(" ");
        }
    }
    printf("\n\nSuma macierzy: \n\n");

    for(int i=0; i<a; ++i){
        for(int j=0; j<b; ++j){
            macierz3[i][j]=macierz1[i][j]+macierz2[i][j];
            printf("%3d",macierz3[i][j]);
            printf(" ");
        }
        printf("\n\n");
    }

    system("pause");
    return 0;
}
