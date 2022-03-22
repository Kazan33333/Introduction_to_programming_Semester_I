#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_E 2.7182818284590452354

int main()
{
    printf("Wartosc wyrazenia wynosi okolo ");
    printf("%f\n",(pow(4,1.5)+pow(6,7))/((1.75)*8+pow(M_E,9)));
    system("pause");
    return 0;
}
