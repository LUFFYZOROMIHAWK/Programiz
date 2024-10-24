#include<stdio.h>
#include<string.h>
int main(){
    char programlang[]="C Programming";
    char bestprogramlang[strlen(programlang)];
    char lang1[]="Ruby";
    char lang2[]="Java";
    char text1[]="abcd";
    char text2[]="efgh";
    int result=strcmp(text1,text2);
    strcat(lang1,lang2);
    strcpy(bestprogramlang,programlang);
    printf("%s\n",programlang);
    printf("\nLength  is: %zu",strlen(programlang));
    printf("\n%s",bestprogramlang);
    printf("\n%s",lang1);
    printf("\n%d",result);
    return 0;
}