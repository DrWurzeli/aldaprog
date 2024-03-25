#include <stdio.h>
#include <stdlib.h>

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
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    int topval = pop();
    printf("Top element was: %d\n", topval);
    printStack();
    return EXIT_SUCCESS;
}