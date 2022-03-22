#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Podaj znak: \n");
    do
    {
        scanf(" %c",&x);
        printf("Kod ASCII: %d\n\n",x);
    }
    while(x!='#');
    system("cls");
    system("pause");
    return 0;
}
