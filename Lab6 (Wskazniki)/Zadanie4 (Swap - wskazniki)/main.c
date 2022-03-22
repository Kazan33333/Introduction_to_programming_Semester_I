#include <stdio.h>
#include <stdlib.h>

void swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y = temp;
}

int main()
{
    int liczba1, liczba2;
    printf("Wprowadz liczby: ");
    scanf("%d%d", &liczba1, &liczba2);
    // przed zamiana
    printf("Liczba 1 wynosi: %d, liczba 2 wynosi: %d \n",liczba1, liczba2);

    swap(&liczba1, &liczba2);
    // po zamianie
    printf("Liczba 1 wynosi: %d, liczba 2 wynosi: %d \n\n",liczba1, liczba2);
    system("pause");
    return 0;
}
