#include <stdio.h>
#include <stdlib.h>

int main()
{
    char n;
    printf("Podaj mala litere: ");
    scanf("%c",&n);
    if(n>=97 && n<=122)
    {
        char a;
        a=n-32;
        printf("Duza litera: %c\n\n",a);
    }
    else
    {
        printf("To nie jest mala litera\n\n");
    }
    system("pause");
    return 0;
}
