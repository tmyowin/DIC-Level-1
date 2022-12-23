//
// Created by MIS on 10-Dec-22.
//

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int main(){

    int count=0, space=0, word=0, line=0, ctr=0, w=0,i=0,n=0,h=0,t=0,u=0,spc=0,freq=0,freq2=0;
    int N=0,a=0,o=0,l=0,C=0,y=0,b=0,e=0,r=0;
    char ch;
    char str[680];

    FILE *fptr;

    fptr=fopen("words.txt","r");
    if(fptr==NULL){
        printf("File cannot open:");
        exit(1);
    }
    while ((ch=fgetc(fptr))!=EOF){
        count++;
        if(ch=='\n' || ch=='\0')
            line++;
        if(ch==' ' || ch=='\n' || ch=='\0'){
            word++;
        }
        if(ch==' ')
            space++;
    }
    if(count>0){
        line++;
        word++;
    }

    printf("Total Number of Character: %d\n",count);
    printf("Total Number of Line: %d\n",line);
    printf("Total Number of Space: %d\n",space);
    printf("Total Number of Word: %d\n",word);

    fclose(fptr);

    FILE *fptr1;

    fptr1=fopen("words.txt","r");

    while (!feof(fptr1)) {
        fgets(str, sizeof str, fptr1);
        ctr= strlen(str);
        for(int k=0;k<=ctr-7;k++){
            w=(str[k]=='w');
            i=(str[k+1]=='i');
            n=(str[k+2]=='n');
            h=(str[k+3]=='h');
            t=(str[k+4]=='t');
            u=(str[k+5]=='u');
            t=(str[k+6]=='t');
            spc=(str[k+7]==' '||str[k+7]=='\0');
            if ((w&&i&&n&&h&&t&&u&&t&&spc)==1)
                freq++;
        }
    }
    printf("\nThe frequency of the word \'winhtut\' is : %d\n",freq);
    fclose(fptr1);

    FILE *fptr2;

    fptr2=fopen("words.txt","r");

    while (!feof(fptr2)) {
        fgets(str, sizeof str, fptr2);
        ctr= strlen(str);
        for(int j=0;j<=ctr-17;j++){
            N=(str[j]=='N');
            a=(str[j+1]=='a');
            t=(str[j+2]=='t');
            i=(str[j+3]=='i');
            o=(str[j+4]=='o');
            n=(str[j+5]=='n');
            a=(str[j+6]=='a');
            l=(str[j+7]=='l');
            C=(str[j+8]=='C');
            y=(str[j+9]=='y');
            b=(str[j+10]=='b');
            e=(str[j+11]=='e');
            r=(str[j+12]=='r');
            C=(str[j+13]=='C');
            i=(str[j+14]=='i');
            t=(str[j+15]=='t');
            y=(str[j+16]=='y');
            spc=(str[j+17]==' '||str[j+17]=='\0');
            if ((N&&a&&t&&i&&o&&n&&a&&l&&C&&y&&b&&e&&r&&C&&i&&t&&y&&spc)==1)
                freq2++;
        }
    }
    printf("\nThe frequency of the word \'NationalCyberCity\' is : %d\n",freq2);
    fclose(fptr2);

    return 0;
}

