#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    int *p=&a,*r=&b;
    printf("Aby policzyc sume, podaj dwie dowolne liczby calkowite \n");
    scanf("%d%d",&a,&b);
    printf("Suma liczb wynosi ");
    printf("%d\n",*p+*r);
    system("pause");
    return 0;
}
