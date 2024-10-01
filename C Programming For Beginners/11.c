#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age<0||age>120){
        printf("Invalid age");
    }
    else{
        (age>=18)?printf("You can vote"):printf("You cannot vote");
    }
    return 0;
}
