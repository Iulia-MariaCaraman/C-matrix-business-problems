#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int i, j, m, n;
    int a[10][10];
    int limita_valoare;
    int numar_luni_sub_limita;

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

    printf("\n--- Numarul de luni cu valori sub limita %d pentru fiecare abonat ---\n", limita_valoare);

    for (i = 0; i < m; i++) 
    {
        numar_luni_sub_limita = 0;

        for (j = 0; j < n; j++) 
        {
            if (a[i][j] < limita_valoare)
            {
                numar_luni_sub_limita++;
            }
        }

        printf("Abonat %d: %d luni sub limita.\n", i + 1, numar_luni_sub_limita);
    }

    return 0;
}