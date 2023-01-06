//
// Created by MIS on 01-Jan-23.
//

#include "stdio.h"
#include "math.h"

int forJump=3;

int min(int first, int second){

    if(second > first){
        return first;
    }else{
        return second;
    }
}

int jumpSearch(int myArr[], int size, int num){

    int previous = 0;

    while (myArr[min(forJump, size)-1]< num){

        previous = forJump;
        forJump = forJump+ 3;

        if(previous>= size){
            return -1;
        }
    }
    if(myArr[previous]==num){
        return previous;
    }
    for(int i=previous; i<forJump; i++){
        if(myArr[i] == num){
            return i;
        }
    }
    return -1;
}

int main(){

    int myArr[]={10,20,30,40,50,70,90,100,130,150};

    int size = sizeof(myArr)/ sizeof(myArr[0]);

    int toSearch= 90;

    int indexNum =jumpSearch(myArr, size,toSearch);

    if(indexNum != -1){

        printf("We Found:\n");
        printf("Found Index: %d\nMy Data:%d",indexNum,myArr[indexNum]);

    }else{

        printf("Not Found:");

    }

    return 0;
}