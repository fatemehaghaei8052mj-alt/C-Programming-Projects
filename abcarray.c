#include <stdio.h>
#include <stdlib.h>
#include "diversus.hpp"

int* folge_einlesen(int laenge) {
    int* feld;
    int i;

    feld = (int*)malloc(laenge * sizeof(int));
    if (feld == NULL) {
        printf("Speicher konnte nicht reserviert werden!\n");
        exit(1);
    }

    for (i = 0; i < laenge; i++) {
        printf("%d. Element: ", i + 1);
        scanf("%d", &feld[i]);
    }
    INCLR

    return feld;
}


int main() {
    int n, i;
    int *a, *b, *c;

    do {
        printf("Laenge der Zahlenfolgen eingeben: ");
        scanf("%d", &n);
        INCLR
    } while (n <= 0);

    printf("Elemente der ersten Folge eingeben:\n");
    a = folge_einlesen(n);

    printf("Elemente der zweiten Folge eingeben:\n");
    b = folge_einlesen(n);

    c = (int*)malloc(2 * n * sizeof(int));
    if (c == NULL) {
        printf("Speicher konnte nicht reserviert werden!\n");
        exit(1);
    }

    /* zweite Folge rueckwaerts */
    for (i = 0; i < n; i++) {
        c[i] = b[n - 1 - i];
    }

    /* erste Folge rueckwaerts */
    for (i = 0; i < n; i++) {
        c[n + i] = a[n - 1 - i];
    }

    printf("Ergebnisfolge:\n");
    for (i = 0; i < 2 * n; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");

    free(a);
    free(b);
    free(c);

    PAUSE
    return 0;
}
