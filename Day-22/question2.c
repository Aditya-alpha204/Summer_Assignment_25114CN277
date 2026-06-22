#include<stdio.h>

int main(){
    char str[100];
    printf("Enter a sentence :\n");
    fgets(str,100,stdin);
    int l=0;
    while(str[l]!='\0'){
        l++;
    }
    int word=0;
    int let=0;
    for(int i=0;i<=l;i++){
          if(str[i]==' '||str[i]=='\n'||str[i]=='\0'){
             if (let>0)
             {
                word++;
                let=0;
             }
             
          }
          else{
            let++;

          }
        
    
    }
    printf("The number of words in a sentence are %d",word);
    

}
