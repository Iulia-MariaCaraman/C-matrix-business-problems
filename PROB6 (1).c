#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int i, j, m, n;
    int a[10][10];
    float suma_abonat; 

    printf("Introduceti numarul de abonati (linii, max 10): ");
    scanf("%d", &m);

    printf("Introduceti numarul de luni (coloane, max 10): ");
    scanf("%d", &n);

    printf("\nIntroduceti valoarea convorbirilor:\n");

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++)
        {
            printf("Abonat %d, Luna %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nMedia convorbirilor pentru fiecare abonat\n");

    for (i = 0; i < m; i++) 
    {
        suma_abonat = 0.0;

        for (j = 0; j < n; j++) 
        {
            suma_abonat += a[i][j];
        }
        if (n > 0) {
            printf("Abonat %d: Media convorbirilor = %.2f\n", i + 1, suma_abonat / n);
        }
        else {
            printf("Abonat %d: Nu s-au introdus date pe nicio luna.\n", i + 1);
        }
    }

    return 0;
}