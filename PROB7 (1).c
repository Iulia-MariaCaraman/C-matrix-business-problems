#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int i, j, m, n;
    int a[10][10];
    int valoare_tinta;
    int gasit_valoare_abonat;

    printf("Introduceti numarul de abonati (linii, max 10): ");
    scanf("%d", &m);

    printf("Introduceti numarul de luni (coloane, max 10): ");
    scanf("%d", &n);

    printf("Introduceti valoarea tinta a convorbirilor: ");
    scanf("%d", &valoare_tinta);

    printf("\nIntroduceti valoarea convorbirilor:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
        {
            printf("Abonat %d, Luna %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nLuni in care abonatii au avut convorbiri de %d\n", valoare_tinta);

    for (i = 0; i < m; i++) 
    {
        gasit_valoare_abonat = 0;
        printf("Abonat %d:", i + 1);

        for (j = 0; j < n; j++) 
        {
            if (a[i][j] == valoare_tinta)
            {
                printf(" Luna %d", j + 1);
                gasit_valoare_abonat = 1;
            }
        }

        if (gasit_valoare_abonat == 0) {
            printf(" Nu a avut nicio luna cu valoarea %d.", valoare_tinta);
        }
        printf("\n");
    }

    return 0;
}