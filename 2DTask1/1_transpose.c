// Author: Ashwin R
// Date: April 27th 2020
// Roll: U4CSE19343

#include<stdio.h>

int main(){
    int size;
    printf("Enter dimension of matrix: ");
    scanf("%d",&size);
    int mat[size][size],transmat[size][size],i,j;
    printf("Enter elements of matrix: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            transmat[j][i]=mat[i][j];
        }
    }
    printf("\nTranspose of the given matrix is: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",transmat[i][j]);
        }
        printf("\n");
    }

}