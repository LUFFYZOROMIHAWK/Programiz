#include<stdio.h>
int main(){
    int a= 5.67;
    int b=9;
    double c=6.67;
    int result=(a+b);                   //IMPLICIT TEXT CONVERSION OF INT TO DOUBLE THEN ADDING THEM BOTH
    printf("%d",result);
    double res=c+b;
    printf("%0.001lf",res);                  //EXPLICIT TEXT CONVERSION OF DOUBLE TO INT AND AGAIN BACK TO DOUBLE AT THE TIME OF ADDING
    return 0;
}