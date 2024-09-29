#include<stdio.h>
int main()
{
    int age;     //creating a variable
    printf("Enter your age:");
    scanf("%d",&age);  //Getting the value of age from user
    if (age>=18){
        printf("You are eligible to vote");
    }
    else{
        printf("You are not eligible to vote");
    }
    return 0;
}