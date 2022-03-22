#include <stdio.h>

int main()
{
    int a,b;
    printf("Podaj dwie dowolne liczby, aby sprawdzic ktora z nich jest wieksza: \n");
    scanf("%d%d",&a,&b);
    switch(a>b)
    {
        case 1:
        printf("Liczba %d jest wieksza niz liczba %d\n",a,b);
        break;
        default:
        printf("Liczba %d jest wieksza niz liczba %d\n",b,a);
        break;
    }
    system("pause");
    return 0;
}
