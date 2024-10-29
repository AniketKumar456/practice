/*

Write a program to mirror the characters. In mirror position we change 'a' to 'z', 'b' to 'y' and so on..

a. Input : "abc"
b. Output: "zyx"

*/


#include <stdio.h>
#include<string.h>

int main() {
    char str[] = "abc wvu";
    int i = 0, diff = 0;
    while(str[i]!='\0'){
        if((str[i]>=97)&&(str[i]<=122)){
            diff = 122-str[i];
            str[i]=97+diff;
        }
        i++;
    }
    printf("%s",str);
    return 0;
}