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
 
    int crr[rows][rows];
    printf("The transpose of matrix is\n");
    for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            crr[j][i]=arr[i][j];

        }
    }
    int k=0;
     for(int i=0;i<rows;i++){
        for(int j=0;j<rows;j++){
            if(arr[i][j]==crr[i][j]){
               continue;
            }
            else{
                k++;
            }

        }
    }
    if(k==0){
        printf("It is symmetric");
    }
    else{
        printf("It is not symmetric");
    }
}
    
