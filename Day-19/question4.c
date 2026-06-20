#include<stdio.h>
int main(){
    int rows,columns;
    printf("Enter size of  rows of matrix\n ");
    scanf("%d",&rows);
    printf("Enter elements of Matrix A\n");
    int arr[rows][rows];
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            printf("Enter element of (%d,%d)\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int s=0;
    printf("The sum of diagonal elements of matrix is\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(i==j){
               s=s+arr[i][j];
            }

        }
    }
    printf("%d",s);
}