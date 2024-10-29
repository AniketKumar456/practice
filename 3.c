/*

Write a program to reverse the word of a given string.
a. Input : "Learning string in a fun way"
b. Output : "gninraeL gnirts ni a nuf yaw"

*/


#include<stdio.h>
#include<string.h>

int main() {
    char str[] = "gninrael gnirts ni a nuf yaw";
    printf("%s\n",str);
    int i = 0, j = 0, temp = 0, index = 0;
    while(str[i]!='\0'){
        index = i;
        if((str[i+1]==32)||(str[i+1]=='\0')){
            // printf("index - %d\n",index);
            while(i>j){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                i--;
                j++;
            }
            // printf("index - %d\n",index);
            i = index;
            j = index+2;
        }
        i++;
    }
    printf("%s",str);
    return 0;
}