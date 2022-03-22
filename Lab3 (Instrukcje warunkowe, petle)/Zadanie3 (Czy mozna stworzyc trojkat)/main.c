#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Aby sprawdzic czy dany trojkat mozna stworzyc podaj dlugosci jego bokow: \n");
    scanf("%d%d%d",&a,&b,&c);
    if ((a+b>c) && (b+c>a) && (a+c>b)) {
        printf("Mozna stworzyc taki trojkat \n");
    } else {
        printf("Nie mozna stworzyc takiego trojkata \n");
    }
    system("pause");
    return 0;
}
