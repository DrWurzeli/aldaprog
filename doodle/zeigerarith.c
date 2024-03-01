#include<stdio.h>
#include<stdlib.h>

int main(void){
    int array[] = {1, 2, 3, 4, 5};

    int *pArr = array;

    pArr++;

    printf("%d\n", *pArr);
    printf("%p\n", pArr);
    printf("%p\n", array);

    return EXIT_SUCCESS;
}