#include<stdio.h>
int main(){
    printf("Enter size of array 1:\n ");
    int si;
    scanf("%d",&si);
    int arr[si];
    for(int i=0;i<si;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&arr[i]);
    }
     printf("Enter sizeof array 2\n: ");
    int s;
    scanf("%d",&s);
    int brr[s];
    for(int i=0;i<s;i++){
        printf("Enter %d element: ",i+1);
        scanf("%d",&brr[i]);
    }
    int crr[si+s];
    for(int i=0;i<si;i++){
        crr[i]=arr[i];
    }   
    int k=si;
    for(int j=0;j<s;j++){
        int duplicate=0;
        for(int i=0;i<k;i++){
           if(crr[i]==brr[j]){
              duplicate=1;
              break;
           }
        }
        if(duplicate==0){
            crr[k]=brr[j];
            k++;
        }
    }
    printf("The merged array is :\n");
    for(int i=0;i<k;i++){
        printf("%d ",crr[i]);
    }
    return 0;

}