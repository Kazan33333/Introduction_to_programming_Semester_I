#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Ilosc pamieci zajmowanej przez dane typy zmiennych: \n");
    printf("Typ int: %d",sizeof(int));
    printf("\nTyp char: %d",sizeof(char));
    printf("\nTyp short: %d",sizeof(short));
    printf("\nTyp long: %d",sizeof(long));
    printf("\nTyp float: %d",sizeof(float));
    printf("\nTyp double: %d\n",sizeof(double));
    system("pause");
    return 0;
}
