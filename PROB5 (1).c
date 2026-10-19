#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int i, j, m, n;
    int a[10][10];
    int limita_valoare;
    int suma_luna;
    int gasit_luna = 0;

    printf("Introduceti numarul de abonati (linii, max 10): ");
    scanf("%d", &m);

    printf("Introduceti numarul de luni (coloane, max 10): ");
    scanf("%d", &n);

    printf("Introduceti valoarea limita: ");
    scanf("%d", &limita_valoare);

    printf("\nIntroduceti valoarea convorbirilor:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
        {
            printf("Abonat %d, Luna %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nLunile in care suma convorbirilor a fost sub %d\n", limita_valoare);

    for (j = 0; j < n; j++) 
    {
        suma_luna = 0;

        for (i = 0; i < m; i++) 
        {
            suma_luna += a[i][j];
        }

        if (suma_luna < limita_valoare)
        {
            printf("Luna %d: Suma totala = %d\n", j + 1, suma_luna);
            gasit_luna=1;
        }
    }

    if (gasit_luna == 0) {
        printf("Suma convorbirilor a fost egala sau mai mare decat limita in toate lunile.\n");
    }

    return 0;
}