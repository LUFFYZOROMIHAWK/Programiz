#include<stdio.h>
void findvalue(int* num){
    *num = 39;
}
int main(){
    int number=21;
    findvalue(&number);
    printf("Number:%d",number);
    return 0;
}