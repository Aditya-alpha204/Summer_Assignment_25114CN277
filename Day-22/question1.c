#include<stdio.h>

int main(){
    char str[50];
    printf("Enter a string :\n");
    scanf("%s",str);
    int l=0;
    while(str[l]!='\0'){
        l++;
    }
    int left=0,right=l-1;
    int palin=0;
    while(left<right){
       if(str[left]==str[right]){
        left++;
        right--;
       }
       else{
        palin++;
        break;
       }
    }
    if(palin==0){
        printf("It is palindrome word");
    }
    else{
        printf("It is not palindrome word");
    }

}
