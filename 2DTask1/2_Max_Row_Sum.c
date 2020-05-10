// Author: Ashwin R
// Date: April 27th 2020
// Roll: U4CSE19343

#include<stdio.h>

int main(){
    int size;
    printf("Enter dimension of matrix: ");
    scanf("%d",&size);
    int mat[size][size],i,j,sum[size];
    printf("Enter elements of matrix: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<size;i++){
        sum[i]=0;
        for(j=0;j<size;j++){
            sum[i]+=mat[i][j];
        }
    }
    int max=sum[0],max_ind;
    for(i=0;i<size;i++){
        if(max<sum[i])
        max=sum[i];
        max_ind=i;
    }
    printf("\nRow number %d has the maximum sum of %d\n",++max_ind,max);
}