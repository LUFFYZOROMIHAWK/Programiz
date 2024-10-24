#include<stdio.h>
int main(){
    int arr[2][3]= {{1,2,3},{4,5,6}};
    arr[0][2]=2;
    arr[1][3]=8;
    printf("%d\n",arr[0][2]);
    printf("%d",arr[1][3]);
    return 0;
}