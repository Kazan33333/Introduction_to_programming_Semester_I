#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i=0; i<10; i++)
    {
        printf("Wstep do programowania\n");
        if (i==9) break;
    }
    system("pause");
    return 0;
}
