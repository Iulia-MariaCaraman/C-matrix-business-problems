#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int i, j, m, n;
    int a[10][10];
    int min_produs, max_produs, amplitudine;

    printf("Introduceti numarul de produse (linii, max 10): ");
    scanf("%d", &m);

    printf("Introduceti numarul de zile (coloane, max 10): ");
    scanf("%d", &n);

    printf("\nIntroduceti vanzarile:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
        {
            printf("Vanzari Produsul %d, Ziua %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nAmplitudinea vanzarilor pentru fiecare produs\n");

    for (i = 0; i < m; i++)
    {
        min_produs = a[i][0];
        max_produs = a[i][0];
        for (j = 1; j < n; j++)
        {
            if (a[i][j] < min_produs)
            {
                min_produs = a[i][j];
            }
            if (a[i][j] > max_produs)
            {
                max_produs = a[i][j];
            }
        }

        amplitudine = max_produs - min_produs;

        printf("Produsul %d: Min = %d, Max = %d, Amplitudine = %d\n", i + 1, min_produs, max_produs, amplitudine);
    }

    return 0;
}