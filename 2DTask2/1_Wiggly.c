// Author: Ashwin R
// Date: May 1st 2020
// Roll: U4CSE19343

#include<stdio.h>

int main(){
    int size;
    printf("Enter dimension of matrix: ");
    scanf("%d",&size);
    int mat[size][size],i,j;
    printf("Enter elements of matrix: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<size;i++){
        if(i%2==0){
            for(j=0;j<size;j++){
                printf("%d ",mat[i][j]);
            }
        }
        else{
            for(j=size-1;j>=0;j--){
                printf("%d ",mat[i][j]);
            }
        }
    }
    printf("\n");
}