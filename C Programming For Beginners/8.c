#include<stdio.h>
#include<stdbool.h>
 int main(){
    int age = 18;
    double height = 6.3;
    bool result = (age >= 18) && (height > 6.0); //AND Operator returns True only if both the boolean expressions are true
    printf("%d \n",result);
    bool result1 = (age >= 18) || (height > 6.0);//OR Operator returns True only if both the boolean expressions are true
    printf("%d \n",result1);
    bool result2 = !(age >=18); //NOT Operator returns the exact opposite value of the boolean expression's initial value
    printf("%d ",result2);
    return 0;
}