#include<stdio.h>
#include<string.h>
struct Person{
    char name[50];
    int age;
    int workexperience;
};
int main(){
    struct Person person1;
    strcpy(person1.name,"Anirudh");
    person1.age=18;
    person1.workexperience=0;

    printf("The name of the person is: %s\n",person1.name);
    printf("The age of the person is:%d\n",person1.age);
    printf("The work experience of the person is:%d",person1.workexperience);

    return 0;
}