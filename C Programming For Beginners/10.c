#include<stdio.h>
int main(){
    int age;
    printf("Enter the age:");
    scanf("%d",&age);
    if(age>120){
        printf("Invalid age");
    }
    else if(age<0){
        printf("Invalid age");
    }
    else if(age>=18){
        printf("You are eligible to vote");
    }
    else{
        printf("You are not eligible to vote");
    }
    return 0;
}