#include <stdio.h>
#include <stdlib.h>

int main(void){

    char myString[5] = "Hallo";
    char *pMyString = myString;

    printf("%p\n", pMyString);
    printf("%p\n", myString);
    printf("%c\n", *pMyString);

    return EXIT_SUCCESS;
}