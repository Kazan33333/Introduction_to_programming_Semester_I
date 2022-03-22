#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isArmstrong(int num);
void wypiszLiczby(int start, int end);
int obliczIloscCyfr(int num);

int main()
{
	int start, end;

	printf("Podaj zakres dolny: ");
	scanf("%d", &start);
	printf("Podaj zakres gorny: ");
	scanf("%d", &end);

	printf("Liczby Armstronga w zakresie od %d do %d: \n", start, end);
	wypiszLiczby(start, end);

	printf("\n\n");
    system("pause");
	return 0;
}

int obliczIloscCyfr(int num) {
	int temp = num;
	int iloscLiczb = 0;

	while (temp != 0) {
		iloscLiczb++;
		temp /= 10;
	}

	return iloscLiczb;
}

int isArmstrong(int num)
{
	int temp, sum;
	int ostatniaCyfra;
	int iloscLiczb = obliczIloscCyfr(num);

	temp = num;
	sum = 0;

	while (temp != 0)
	{
		ostatniaCyfra = temp % 10;
		sum += pow(ostatniaCyfra, iloscLiczb);
		temp /= 10;
	}

	if (num == sum)
		return 1;
	else
		return 0;
}

void wypiszLiczby(int start, int end)
{
	while (start <= end)
	{
		if (isArmstrong(start))
		{
			printf("%d\t", start);
		}

		start++;
	}
}
