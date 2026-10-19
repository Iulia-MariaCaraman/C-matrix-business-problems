#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	
	int i, j, m, n, suma_zi;
	int val, a[10][10];

	printf("Introduceti numarul de zile (linii, max 10): ");
	scanf("%d", &m);

	printf("Introduceti numarul de produse (coloane, max 10): ");
	scanf("%d", &n);

	printf("Introduceti vanzarile");

	for (i = 0; i < m; i++) { 
		for (j = 0; j < n; j++)
		{
			printf("Vanzari in Ziua %d, Produsul %d: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}

	printf("Introduceti valoarea tintei de vanzari pe zi (val): ");
	scanf("%d", &val);

    printf("Rezultate Verificare Tinta");

	for (i = 0; i < m; i++) 
	{
		suma_zi = 0;
		for (j = 0; j < n; j++)
			suma_zi = suma_zi + a[i][j];
		if (suma_zi < val)
		{
			printf("Ziua %d a avut vanzari sub tinta. Total vanzari: %d\n", i + 1, suma_zi);

		}
	}

	return 0;
}






