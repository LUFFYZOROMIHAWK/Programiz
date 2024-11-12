#include<stdio.h>
int main(){
    int age=25;
    int* ptr = &age;
    *ptr=31;
    printf("%d",ptr);
    return 0;
}