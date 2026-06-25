#include<stdio.h>
int main(){
    char str1[100],str2[100];
    printf("Enter string 1\n");
    fgets(str1,100,stdin);
    int l=0,k=0;
    while(str1[l]!='\0'){
        if(str1[l]=='\n'){
            str1[l]='\0';
        }
        l++;
    }
      printf("Enter string 2\n");
    fgets(str2,100,stdin);
    int l2=0;
    while(str2[l2]!='\0'){
        if(str2[l2]=='\n'){
            str2[l2]='\0';
        }
        l2++;
    }
    if(l!=l2){
        printf("Not Anagram string");
        return 0;
    }
    int freq[256]={0};
    int i=0;
    while(str1[i]!='\0'){
        freq[str1[i]]++;        
        i++;
    }
    int j=0;
    while(str2[j]!='\0'){
        freq[str2[j]]--;        
        j++;
    }
    int p=0;
    int s=0;
    for(int p=0;p<l;p++){
        if(freq[p]!=0){
            s=1;
            break;
        }

    }
    if(s==0){
        printf("Anagram string");
    }
    else{
        printf("Not Anagram");
    }
    
}