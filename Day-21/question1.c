#include<stdio.h>

int main(){
    char str[50];
    printf("Enter a string :\n");
    scanf("%s",str);
    int l=-1;
    while(str[l]!='\0'){
        l++;
    }
    printf("The lenth of string is: %d",l);
}