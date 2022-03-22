#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,a;
    printf("Podaj dowolna liczbe naturalna wieksza od 1 aby sprawdzic czy jest ona liczba pierwsza \n");
    scanf("%d",&n);
    if (n==1)
    {
        printf("Nie jest to liczba pierwsza \n");
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a=1;
            break;
        }
    }
    if (a==1)
    {
        printf("Jest to liczba zlozona \n");
    }
    else
    {
        printf("Jest to liczba pierwsza \n");
    }
    system("pause");
    return 0;
}
