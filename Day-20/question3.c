#include<stdio.h>
int main(){
    int size;
    printf("Enter size of matrix\n ");
    scanf("%d",&size);
    printf("Enter elements of Matrix A\n");
    int arr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("Enter element of (%d,%d)\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int s=0;
    for(int i=0;i<size;i++){
        int s=0;
        for(int j=0;j<size;j++){
           s=s+arr[i][j];
        }
        printf("The sum of row %d is %d",i+1,s);
  
    }
    

}