/*

Write a program to convert string to equivalent number:
a. Input: "1234"
b. Output: "1234(in decimal)"

*/

#include <stdio.h>
#include<string.h>

int main() {
    char str[] = "1234";
    int i = 0, value = 0;
    while(str[i]!='\0'){
            value = value*10 + str[i]-'0';
        i++;
    }
    printf("%d",value);
    return 0;
}