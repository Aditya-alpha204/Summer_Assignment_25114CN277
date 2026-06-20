#include<stdio.h>
int main(){
    int rows,columns;
    printf("Enter rows of matrix\n ");
    scanf("%d",&rows);
     printf("Enter columns of matrix\n ");
    scanf("%d",&columns);
    printf("Enter elements of Matrix A\n");
    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter element of (%d,%d)\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int s=0;
    for(int i=0;i<columns;i++){
        int s=0;
        for(int j=0;j<rows;j++){
           s=s+arr[i][j];
        }
        printf("The sum of column %d is %d",i+1,s);
  
    }
    

}