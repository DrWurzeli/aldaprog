#include <stdio.h>
#include <stdlib.h>

int main(void){

    int *arr;
    int n = 10;

    arr = malloc(n * sizeof(int));
    
    arr = realloc(arr, (n+1) * sizeof(int));

    free(arr);
    arr = NULL;

    return EXIT_SUCCESS;
}