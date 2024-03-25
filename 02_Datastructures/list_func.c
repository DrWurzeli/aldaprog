#include"eingabe.h"
#include"list.h"

typedef struct Listitem li;

li *start = NULL;

void appendToList(li *list){
    return;
}

void insertInList(li *list, int pos){

}

void removeFromList(li *list, int pos){

}

void updateListitem(li *list, int pos, int value){

}

void newListitem(){
//helper
    printf("Creating new listitem...\n");
    li *new = malloc(sizeof(li));
    if (!new){
        printf("Creation failed\n");
        return;
    }
    printf("Please enter a value (int): ");
    new->zahl = eingabe();
    //appendToList(new);
}

int main(void){

    return EXIT_SUCCESS;
}