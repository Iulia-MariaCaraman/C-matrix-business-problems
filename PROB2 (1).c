#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int i, j, m, n;
	int a[10][10];

	printf("Introduceti numarul de zile (linii, max 10): ");
	scanf("%d", &m);

	printf("Introduceti numarul de produse (coloane, max 10): ");
	scanf("%d", &n);

	printf("Introduceti vanzarile: ");

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
		{
			printf("Vanzari in Ziua %d, Produsul %d: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}

	for (i = 0; i < m; i++)
	{
		int min = a[i][0];

		for (j = 1; j < n; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}

		printf("Vanzarea minima in ziua %d este: %d\n", i + 1, min);
	}

	return 0;
}

