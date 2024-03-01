#include <stdlib.h>
#include "eingabe.h"

struct bruch_i{
    int zaehler;
    int nenner;
};
typedef struct bruch_i bruch;

int main(){
    bruch x;
    x.zaehler = eingabe();
    x.nenner = eingabe();
    return EXIT_SUCCESS;
}