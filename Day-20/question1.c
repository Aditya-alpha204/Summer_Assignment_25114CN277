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
     printf("Enter elements of Matrix B\n");
    int brr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("Enter element of (%d,%d)\n",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    int crr[size][size];
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            crr[i][j]=0;
            for(int k=0;k<size;k++)
            crr[i][j]=crr[i][j]+arr[i][k]*brr[k][j];
        }
    }

}