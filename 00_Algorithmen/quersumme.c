#include <stdio.h>
#include <stdlib.h>

int main(void){
    int input = -1, quersumme = 0;

	do {
		printf("Bitte positive Zahl eingeben: ");
		if(scanf("%d", &input) != 1){
			scanf("%*[^\n]");
			input = -1;
			continue;
		}
	} while (input < 0);

    while(input > 0){
        quersumme += input%10;
        input /= 10;
    }

    printf("Quersumme: %d", quersumme);
    return EXIT_SUCCESS;
}