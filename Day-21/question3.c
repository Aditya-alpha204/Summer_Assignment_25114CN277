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
    for(int i=0;i<l;i++){
         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
               v++;
         }
         else if(str[i]>='a'&&str[i]<='z'||str[i]>='A'&&str[i]<='Z'){
            c++;
         }
         else{
            continue;
         }
    }
    printf("Number of vowels is %d\n and number of consonants is %d",v,c);
}