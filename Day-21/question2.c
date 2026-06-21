#include<stdio.h>

int main(){
    char str[50];
    printf("Enter a string :\n");
    scanf("%s",str);
    int l=0;
    while(str[l]!='\0'){
        l++;
    }
    printf("The Reverse string is:\n");    
    for(int i=l-1;i>=0;i--){
         printf("%c",str[i]);
    }
}