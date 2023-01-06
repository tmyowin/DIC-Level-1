//
// Created by MIS on 26-Nov-22.
//
#include "stdio.h"

int main(){

    int myArr[100];
    int i,k;

    FILE *fptr;

    fptr= fopen("tmyowin.txt","w");

if(fptr==NULL){
    printf("File Cannot open:");
}else {
    for (i = 1; i <= 100; i++) {
        fprintf(fptr, "%d%c", i, '\n');
    }
    fclose(fptr);
}
    fptr= fopen("tmyowin.txt","r");
    for(k=0;k<100;k++){
        fscanf(fptr,"%d",&myArr[k]);
        printf("%d\n",myArr[k]);
    }
fclose(fptr);

    return 0;
}