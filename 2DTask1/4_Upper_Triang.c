// Author: Ashwin R
// Date: April 27th 2020
// Roll: U4CSE19343

#include<stdio.h>

int main(){
    int size;
    printf("Enter dimension of matrix: ");
    scanf("%d",&size);
    int mat[size][size],i,j,sum=0;
    printf("Enter elements of matrix: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(j<i){
                mat[i][j]=0;
            }
            sum+=mat[i][j];
        }
    }
    printf("Upper triangular matrix: \n");
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }    
    printf("\n%s\n",sum>=100?"YES":"NO");
}
