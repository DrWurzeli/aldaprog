#include <stdio.h>
#include <stdlib.h>

int eingabe(){
    int input = -1;
    do{
        printf("Bitte eine Zahl eingeben: ");
        if(scanf("%d", &input) != 1){
            scanf("%*[^/n]");
            input = -1;
            continue;
        }
    }while(input < 0);
    return input;
}