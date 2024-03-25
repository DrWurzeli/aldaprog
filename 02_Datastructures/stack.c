#include "eingabe.h"

struct stackelement{
    int val;
    struct stackelement *next;
};

struct stackelement *start = NULL;

void push(int num){
    struct stackelement *new = malloc(sizeof(struct stackelement));
    if (!new){
        printf("Could not create new stackelement.\n");
        EXIT_FAILURE;
    }

    struct stackelement *helper = start;
    start = new;
    new->next = helper;
    new->val = num;

    free(helper);
    helper = NULL;
    //printf("Added %d to stack.\n", num);
}

int pop(){
    if(start == NULL){
        printf("No element on stack.\n");
        EXIT_FAILURE;
    }
    int num = start->val;

    struct stackelement *helper = start->next;
    free(start);
    start = helper;
    free(helper);
    helper = NULL;

    //printf("Pop.\n");
    return num;
}

void printStack(){
    struct stackelement *helper = start;
    while(helper != NULL){
        printf("Element: %d\n", helper->val);
        helper = helper->next;
    }
}

int main(void){
    printf("Starting...\n");
    int input = INT_MIN;
    do{
        printf("Menu. Choose an action:\n");
        printf("1 | PrintStack\n2 | Add Element\n3 | Pop Element.\n4 | Ende.\n");
        input = eingabe();
        switch(input){
            case 1: printStack(); break;
            case 2: push(eingabe()); break;
            case 3: printf("Popped: %d\n", pop()); break;
            default: break;
        }
    }while(input != 4);
    printf("Bye bye.\n");
    return EXIT_SUCCESS;
}