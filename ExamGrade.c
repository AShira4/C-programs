#include<stdio.h>
int main(){

    int a;
    printf("Enter your mark:");
    scanf("%d", &a);
    if(a>=80 && a<=100){
        printf("You got grade A+");
    }
    else if( a>=70 && a<=79){
        printf("you got grade A");
    }
    else if( a>=60 && a<=69){
        printf("You got grade B");
    }
    else if( a>=50 && a<=59){
        printf("You got grade C");
    }
    else if( a>=40 && a<=59){
        printf("You got grade D");
    }
    else if( a>=33 && a<=39){
        printf("You got grade E");
    }
    else{
        printf("You failed to pass the exam");
    }


    return 0;
}