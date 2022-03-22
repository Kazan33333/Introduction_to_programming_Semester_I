#include <stdio.h>
#include <stdlib.h>

void szyfruj(int klucz, char tab[])
{
	int dl = strlen(tab); //okreœlenie iloœci znaków wyrazu

	//sprawdzenie, czy klucz miesci sie w zakresie
	if(!(klucz >= -26 && klucz <= 26)) return;

	if(klucz >= 0)
		for(int i=0;i<dl;i++)
		if(tab[i] + klucz <= 'Z')
			tab[i] += klucz;
		else
			tab[i] = tab[i] + klucz - 26;
	else
		for(int i=0;i<dl;i++)
		if(tab[i] + klucz >= 'A')
			tab[i] += klucz;
		else
			tab[i] = tab[i] + klucz + 26;
}

int main()
{
	char tab[1001]; //tablica znaków - max 1000 znaków.

	int klucz;

	printf("Podaj wyraz skladajacy sie z duzych liter: ");
	scanf("%s",&tab);

	printf("Podaj klucz z przedzialu [-26,26]: ");
	scanf("%d",&klucz);

	szyfruj(klucz,tab); //szyfrowanie

	printf("\nPo zaszyfrowaniu: %s\n",tab);

	szyfruj(-klucz,tab); //deszyfrowanie

	printf("Po rozszyfrowaniu: %s\n\n",tab);

	system("pause");
	return 0;
}
