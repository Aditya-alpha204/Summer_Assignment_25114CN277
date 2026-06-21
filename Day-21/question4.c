#include<stdio.h>

int main(){
    char str[50];
    printf("Enter a string :\n");
    scanf("%s",str);
    int l=0;
    while(str[l]!='\0'){
        l++;
    }
    int v=0,c=0;
    printf("The lower to upper case string is:\n");
    for(int i=0;i<l;i++){
         if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-32;
            printf("%c",str[i]);
         }
         else{
            printf("%c",str[i]);
         }
    }
}