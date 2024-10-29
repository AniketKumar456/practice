/*

Write a program to search a substring in string. Only print the first occurence.
a. Input : string : "Coding is fun", substring : fun
b. Output : yes exists at 11th position.

*/



#include<stdio.h>
#include<string.h>

int main(){
    char str[] = "coding is fun for learning";
    char substr[] = "for";
    int ls = strlen(substr);
    int i = 0, j = 0, count = 0, pos = 0;
    while(str[i]!='\0'){
        if(str[i]!=substr[j]){
            count = 0;
            j = 0;
        }
        if(str[i]==substr[j]){
            count++;
            j++;
            if(count==ls){
                pos = (i - (count-2));
                break;
            }
        }
        i++;
    }
    printf("Position of first occurence of subtring is %d",pos);
    return 0;
}