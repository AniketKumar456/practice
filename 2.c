/*

Write a program to convert a string in upper camel casing.
a. Input : "String is fun for learning"
b. Output : "StringIsFunForLearning"

*/
// bug 

#include<stdio.h>

int main(){
    char str[] = "String is fun for learning";
    int i = 0, j = 0;
    while(str[i]!='\0'){
        if(i==0){
            if((str[i]>='A')&&(str[i]<='Z')){
                str[i] = str[i];
            }
            else{
                str[i] = str[i]-32;
            }
        }
        if(str[i]!=32){
            if(str[i-1]==32){
                str[i] = str[i]-32;
            }
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
    printf("%s",str);
    return 0;
}