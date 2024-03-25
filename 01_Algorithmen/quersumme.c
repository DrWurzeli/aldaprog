#include "eingabe.h"

int main(void){
    int input = -1, quersumme = 0;

	input = eingabe();

    while(input > 0){
        quersumme += input%10;
        input /= 10;
    }

    printf("Quersumme: %d", quersumme);
    return EXIT_SUCCESS;
}