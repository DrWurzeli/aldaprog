#include "eingabe.h"

int rpn(){
    int b = 10,c,n,t,x;

    do{
        x = n = 0;
        for(c=getchar(); c>='0'&&c<='9';c=getchar()){
            n++;
            x = x*b + (c - '0');
        }
        if(n>0) push(x);
        if (c == '+'){
            push(pop() + pop());
        }
        if (c == '-'){
            int op2 = pop();
            push(pop() - op2);
        }
        if (c == '~'){
            push(pop() * -1);
        }
        if (c == '*'){
            push(pop() * pop());
        }
        if (c == '/'){
            int op2 = pop();
            push(pop() - op2);
        }

    }while(c!=EOF);
    printf("%d\n", pop());

    return 0;
}