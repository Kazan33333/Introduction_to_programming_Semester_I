#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=1;
    for(i=1;i<=100;i++)
    {
        if(i%2==0)
        {
            printf("%d\t%0.0f\n",i,pow(i,2));
        }
        else
        {
            printf("%d\t%f\n",i,sqrt(i));
        }
    }
    system("pause");
    return 0;
}
