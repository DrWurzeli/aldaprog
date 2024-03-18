#include "eingabe.h"

int main(void){

    int n = 0;
    printf("Schritt 1, Festlegen der Laenge:\n");
    n = eingabe();

    int *arr;
    arr = malloc (n * sizeof(int));

    for(int i = 0; i < n; i++){
        printf("Schritt %d, Zahl %d von %d eingeben:\n", i+2, i+1, n);
        arr[i] = eingabe();
    }

    printf("Eingabe beendet, Ausgabe:\n");
    for(int ii = 0; ii < n; ii++){
        printf("Zahl %d an Stelle %d: %d\n", ii+1, ii, *arr);
        arr++;
    }

    printf("Fertig.\n");
    
    free(arr);
    arr = NULL;
    return EXIT_SUCCESS;
}