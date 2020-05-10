// Author: Ashwin R
// Date: May 1st 2020
// Roll: U4CSE19343

#include<stdio.h>
void swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n - 1; i++) { 
        min_idx = i; 
        for (j = i + 1; j < n; j++) 
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
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

    int array[size],count=0;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i+j==size-1){
                array[count]=mat[i][j];
                count++;
            }
        }
    }
    count=0;
    printf("\n");
    selectionSort(array,size);
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            if(i+j==size-1){
                mat[i][j]=array[count];
                count++;
            }
        }
    }
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
        printf("\n");
}
    