#include<stdio.h>
int main(){
    int rows,columns;
    printf("Enter number of  rows of matrix\n ");
    scanf("%d",&rows);
    printf("Enter number of columns of matrix\n ");
      scanf("%d",&columns);
    printf("Enter elements of Matrix A\n");
    int arr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter element of (%d,%d)\n",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
     printf("Enter elements of Matrix B\n");
    int brr[rows][columns];
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            printf("Enter element of (%d,%d)\n",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    int crr[rows][columns];
    printf("The added matrix is\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            crr[i][j]=arr[i][j]+brr[i][j];
            printf("%d ",crr[i][j]);

        }
        printf("\n");
    }

}