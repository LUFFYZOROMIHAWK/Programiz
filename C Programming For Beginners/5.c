#include<stdio.h>
int main(){
    int age;
    double height;
    printf("Enter the value of age:%d\n",&age);//Gets the age of the person
    scanf("%d",&age);
    print("Enter the value of height:%lf\n",&height);//Gets the height of the person
    scanf("%lf",&height);
    printf("The age of the person is: %d\n",age);
    printf("The heightof the person is: 0.1%lf\n",height);
    return 0;
}