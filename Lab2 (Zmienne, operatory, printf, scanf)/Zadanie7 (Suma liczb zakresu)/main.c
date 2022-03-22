#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int a,b;
    printf("Kalkulator sumy zakresu liczb\n");
    printf("\nPodaj pierwsza i ostatnia liczbe (obie naturalne) dla jakich chcesz obliczyc sume: \n");
    scanf("%u%u",&a,&b);
    printf("%u\n",((a+b)*(b-a+1))/2);
    system("pause");
    return 0;
}
