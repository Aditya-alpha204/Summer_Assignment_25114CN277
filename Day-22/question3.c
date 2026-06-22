#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a sentence :\n");
    fgets(str,100,stdin);
    int l=0;
    while(str[l]!='\0'){
        l++;
    }
    int freq[256]={0};
    int i=0;
    while(str[i]!='\0'){
        freq[str[i]]++;
        i++;
        
    }
    for(int j=0;j<256;j++){
        if(freq[j]>0){
        printf("Charater %c is %d times\n",j,freq[j]);
    }

}
return 0;
}
