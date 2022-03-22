#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[50] = "To be, or not to be, that is the question\n\n";
    char str2[50] = "question";
    printf("%s",str1[50]);

    if(strncmp(str1,str2,8) == 0)
        printf("Podany napis konczy sie slowem 'question'\n\n");
    else
        printf("Podany napis nie konczy sie slowem 'question'\n\n");
    system("pause");
    return 0;
}
