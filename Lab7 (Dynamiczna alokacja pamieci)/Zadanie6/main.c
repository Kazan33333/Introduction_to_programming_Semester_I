#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Podaj ilosc wierszy tablicy: ");
    scanf("%d",&n);
    double **tab;
    tab = (double**) malloc(n * sizeof(double**));
    for(int i=0;i<n;i++)
        tab[i] = (double*) malloc(2 * sizeof(double));

    srand(time(NULL));
    for(int i=0;i<n;i++)
    {
            tab[i][0]=(double)rand()/RAND_MAX*2.0-1.0;
            printf("% f  ",tab[i][0]);
            tab[i][1]=(double)rand()/RAND_MAX*2.0-1.0;
            printf("% f  ",tab[i][1]);
    }

    int p1,p2;
    double a,b,odleglosc;
    printf ("Podaj dwa punkty\n");
    scanf ("%d%d",&p1,&p2);
    a=(tab[p1-1][0]-tab[p2-1][0]);
    b=(tab[p1-1][1]-tab[p2-1][1]);
    printf("\n%f %f",a,b);

    odleglosc = sqrt((a*a)+(b*b));
    printf("\n%f", odleglosc);

    system("pause");
    return 0;
}

