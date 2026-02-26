#include "diversus.hpp"

struct Student {
    char name[21];
    int matrikelnummer;
    float note;
};

int main() {
    struct Student s;

    printf("Bitte geben Sie den Namen ein:\n");
    zklesen(s.name, 21);

    printf("Bitte geben Sie die Matrikelnummer ein:\n");
    scanf("%d", &s.matrikelnummer);
    INCLR

    printf("Bitte geben Sie die Note ein:\n");
    scanf("%f", &s.note);
    INCLR

    printf("\nStudentendaten:\n");
    printf("Name: %s\n", s.name);
    printf("Matrikelnummer: %d\n", s.matrikelnummer);
    printf("Note: %.2f\n", s.note);

    PAUSE
    return 0;
}
