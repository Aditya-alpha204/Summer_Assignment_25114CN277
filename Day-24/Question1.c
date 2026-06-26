#include<stdio.h>

int main() {
    char str1[100], str2[100];
    printf("Enter string 1:\n");
    fgets(str1, 100, stdin);
    int l1 = 0;
    while(str1[l1] != '\0'){
        if(str1[l1] == '\n'){
            str1[l1] = '\0';
            break;
        }
        l1++;
    }
    
    printf("Enter string 2:\n");
    fgets(str2, 100, stdin);
    int l2 = 0;
    while(str2[l2] != '\0'){
        if(str2[l2] == '\n'){
            str2[l2] = '\0';
            break;
        }
        l2++;
    }
    if(l1 != l2){
        printf("Not a rotation\n");
        return 0;
    }
    char temp[200]; 
    for(int i = 0; i < l1; i++){
        temp[i] = str1[i];
    }
    for(int i = 0; i < l1; i++){
        temp[i + l1] = str1[i]; 
    }
    temp[l1 * 2] = '\0';
    int isRotation = 0;
    for(int i = 0; i <= l1; i++){
        
        int match = 1;
        for(int j = 0; j < l2; j++){
            if(temp[i + j] != str2[j]){
                match = 0;
                break;    
            }
        }
        if(match == 1){
            isRotation = 1;
            break;
        }
    }
    if(isRotation == 1){
        printf("Strings are rotations of each other\n");
    } else {
        printf("Not a rotation\n");
    }
    
    return 0;
}