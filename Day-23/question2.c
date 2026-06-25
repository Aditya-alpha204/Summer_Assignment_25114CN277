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
    
    char p;
    int k = 0;
    for(int j = 0; j < l; j++){
        p = str[j];
        k = 0;
        for(int i = 0; i < l; i++){
           if(i != j){
            if(p == str[i]){
               k++;
            }
            
           }
        }
        if(k>0){
            printf("'%c' is the first repeating element\n", str[j]);
            break;
        }
    }
    
    return 0;
}