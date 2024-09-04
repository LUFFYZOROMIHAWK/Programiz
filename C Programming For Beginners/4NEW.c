#include <stdio.h>

int main(){
    int a;
    double b;
    char c;
    printf("Enter the values:");
    scanf("%d %lf %c", &a,&b,&c);
    printf("The number is: %d\n",a);
    printf("The double value is:%lf\n",b);
    printf("The character is:%c\n",c);
    return 0;
}