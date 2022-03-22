#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[] = "Doughnut";
    char str2[] = "Donut";
    printf("%s\n",str1);
    printf("%s\n\n",str2);

    if (strcmp(str1, str2) == 0)
        printf("Napisy sa takie same\n\n");
    else
        printf("Napisy nie sa takie same\n\n");

    system("pause");
    return 0;
}
