#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a sentence :\n");
    fgets(str, 100, stdin);
    int l = 0;
    while(str[l] != '\0'){
        if(str[l] == '\n') {
            str[l] = '\0';
            break;
        }
        l++;
    }
    int k=0,n=0;
    char p;
    for(int i=0;i<l;i++){
        k=0;
        for(int j=0;j<l;j++){
            if(j!=i){
                if(str[i]==str[j]){
                   k++;
                }

            }
        }
        if(k>n){
            n=k;
            p=str[i];
        }
    }
    printf("The maximum occuring character is '%c' having frequency %d",p,n+1);
    
    return 0;
}