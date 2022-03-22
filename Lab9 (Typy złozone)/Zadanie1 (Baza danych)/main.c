#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[] = "Krzysztof";
    char str2[] = "Kazanowski";
    enum dane {wiek=19};
    printf("Imie: %s\n",str1);
    printf("Nazwisko: %s\n",str2);
    printf("Wiek: %d\n",wiek);

    if (wiek<18)
        printf("Niepelnoletni\n\n");
    else
        printf("Pelnoletni\n\n");

    system("pause");
    return 0;
}
