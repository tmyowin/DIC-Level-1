//
// Created by National Cyber City on 11/15/2022.
//
#include "stdio.h"
#include "stdlib.h"

int db[100];
int dbMoney[100];
int main(){
    int key=10;
    int age=0;
    int option=0;
    int userId=0;
    int userId2=0;
    int flag=0;
    int global_flag=0;
    int dbIndex=0;
    int button=0;
    int score=0;
    int level=0;
    int amt=0;

    while ( key<=10){

        printf("Welcome to our game:\n");
        printf("Enter your age:");
        scanf("%d",&age);
        if(age>17){

            printf("you can play game!\n");
            while (true){

                printf("Press 1 to Login!\nPress 2 to Register:\nPress 3 to Complete Quit:\nPress 4 to Back:");
                scanf("%d",&option);

                while (true){
                    if(option==1){
                        printf("This is Login\n");
                        printf("Enter your id:");
                        scanf("%d",&userId);

                        for(int i=0; i<100 ; i++){

                            if(db[i] == userId){
                                flag=1;
                            }
                        }
                        if(flag==1){
                            printf("You Can play game:\n");
                            // ဆက်ရေးရန်
                            printf("<<< Ready to Start! >>>\n");

                            while (true){
                                printf("press 1 to Let's Go:\npress 2 to Retry:\npress 3 to Next:\npress 4 to Exit:");
                                scanf("%d",&button);

                                    if(button==1){
                                        printf("Game playing....\n");
                                        printf("Your score:");
                                        scanf("%d",&score);

                                        for(int i=0;i<100;i++){
                                            if(db[score]=score) {
                                                score++;
                                                if (score >= 100) {
                                                    printf("**You Win**\n");
                                                    break;
                                                }else if(score<100){
                                                    printf("You Lose.....Replay!\n");
                                                    break;
                                                }
                                            }
                                        }
                                    } else if (button==2){
                                        if(score<100){
                                            printf("Replay!\n");

                                        }
                                    }else if(button==3){
                                        printf("Next Level!\n");

                                    }else if(button==4){
                                        exit(1);
                                    }else{
                                        printf("invalid button:");
                                        break;
                                    }
                            }

                        } else{
                            printf("Your id is not valid:\n");
                            break;
                        }

                    } else if(option==2){

                        if(global_flag==1){
                            global_flag++;
                            break;
                        }

                        printf("This is Register:\n");

                        printf("Pls Enter your id:");
                        scanf("%d",&userId);

                        for(int i=0; i<100 ; i++){
                            if(db[i]==userId){
                                flag=1;
                            }
                        }
                        while (true){
                            if(flag==1){
                                printf("User Id Already Taken:\n");
                            } else{
                                printf("Confirm your ID: Enter: ");
                                scanf("%d",&userId2);

                                if(userId==userId2){
                                    db[dbIndex]=userId;
                                    dbIndex++;
                                    printf("Registration success:\n");
                                    //registration code
                                    global_flag=1;
                                    //ဆက်ရေးရန်

                                    if(global_flag==1){
                                        printf("Subscription Required.\n");
                                        printf("Please enter cash in least 1000$.");
                                        scanf("%d",&amt);

                                        printf("Your cash balance is %d:\n",amt);
                                    }
                                    break;

                                } else{
                                    printf("Id not same:\n");
                                    break;
                                }
                            }
                        }

                    } else if(option==3){
                        exit(1);
                    } else if(option == 4){
                        break;
                    } else{
                        printf("Invalid Option!\n");
                    }
                }

            }

        } else{
            printf("You cannot play game!\nTry Again!\n");
        }

    }


    return 0;
}