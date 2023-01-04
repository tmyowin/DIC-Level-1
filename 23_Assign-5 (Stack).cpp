//
// Created by MIS on 03-Jan-23.
//

#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 15

struct stack{

    int myData[MAXOFSTACK];
    int upper;

};

typedef struct stack st;

int isStackIsEmpty(st *myStack){

    if(myStack->upper == -1){
        return -1;
    }else{
        return 0;
    }
}

void creat_emptyStack(st *myStack){

    myStack->upper = -1;
}

int isStackIsFull(st *myStack){
    if(myStack->upper == MAXOFSTACK-1){
        return 1;
    }else{
        return 0;
    }
}

void inputToStack(st *myStack, int value){
    if(isStackIsFull(myStack)){
        printf("My Stack is Full.");
    }else{
        myStack->upper++;
        myStack->myData[myStack->upper]=value;
    }
}

void outputFromStack(st *myStack){

    if(isStackIsEmpty(myStack)){
        printf("Stack is Empty!");
    }else{
        int i=0, j=0, count=0;
        for(i=myStack->upper; i>=0; i--){
            count++;
        }
        printf("Total number of My Stack: %d\n",count);

        printf("\n");

        for(j=myStack->upper; j>=0; j--){
            printf("Output from Stack data is index %d: %d\n",j,myStack->myData[j]);
        }
    }

}

int main(){

    st *myStack=(st*)malloc(sizeof(st));

    creat_emptyStack(myStack);

    inputToStack(myStack, 12);
    inputToStack(myStack, 18);
    inputToStack(myStack, 20);
    inputToStack(myStack, 9);
    inputToStack(myStack, 10);
    inputToStack(myStack, 15);
    inputToStack(myStack, 1);
    inputToStack(myStack, 3);

    outputFromStack(myStack);

    return 0;
}