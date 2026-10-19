#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int i, j, m, n;
    int a[10][10];
    int vanzari_totale_zi;

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

    printf("\nVanzarile pentru fiecare zi\n");

    for (j = 0; j < n; j++)
    {
        vanzari_totale_zi = 0;

        for (i = 0; i < m; i++)
        {
            vanzari_totale_zi += a[i][j];
        }

        printf("Ziua %d: Vanzari totale = %d\n", j + 1, vanzari_totale_zi);
    }

    return 0;
}