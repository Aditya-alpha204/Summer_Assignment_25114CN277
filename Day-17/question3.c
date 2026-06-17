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
    int crr[si];
    int k=0;
    for(int i=0;i<si;i++){
        int du=0;
        for(int j=0;j<s;j++){
            if(arr[i]==brr[j]){
                du=1;
                break;
            }
        }
        if(du==0){
            crr[k]=arr[i];
        }
    }
    printf("The intersection is :\n");
    for(int i=0;i<k;i++){
        printf("%d ",crr[i]);
    }
    return 0;
}