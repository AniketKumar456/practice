/*

Write a program to find a word in dictionary:
a. Input: dictionary: {"Aryabit","code","Fun","test","assignment"};search:"code"
b. Output: yes exists.

*/

#include<stdio.h>
#include<string.h>


int main(){
    char *dictionary[5] = {"Aryabit","fun","fune","test","assignment"};
    char search[] = "fun";
    int i = 0, l = 0, count = 0, j = 0;
    // l = strlen(search);
    while(i<5){
        char *str = dictionary[i];
        j = 0;
        while(str[j]){
            // printf("%c",str[j]);
            if(str[j]!=search[j]){
                break;   
            }
            j++;
        }
        if (str[j] == 0 && search[j] == 0){
            printf("%s and %s are equal at index of - %d\n", str, search,i);
            break;
        } 
        // else {
        //     printf("%s and %s are not equal\n", str, search);
        // }
        i++;
    }
    return 0;
}