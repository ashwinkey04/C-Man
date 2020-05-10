// Author: Ashwin R
// Date: April 27th 2020
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
    int max=mat[0][size],sum=0;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i+j==size-1){
                sum+=mat[i][j];
                if(max<mat[i][j]){
                    max=mat[i][j];
                }
            }
        }
    }
    printf("\nSum of anti-diagonal: %d\nMaximum element in anti-diagonal: %d\n",sum,max);
}