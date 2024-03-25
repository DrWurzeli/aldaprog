#include <stdio.h>
#include <stdlib.h>

int eingabe(){
    int input = INT_MIN;
    do{
        if(scanf("%d", &input) != 1){
            scanf("%*[^/n]");
            input = INT_MIN;
            continue;
        }
    }while(input == INT_MIN);
    return input;
}