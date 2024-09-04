#include<stdio.h>
# define MAX 100

struct sparseMatrix
{
    int rows[MAX];
    int cols[MAX];
    int value[MAX];
    
}sparseMatrix;

void main(){
    int rows,cols;
    int ele;
    printf("enter number of rows :  ");
    scanf("%d",&rows);
    printf("enter number of cols :  ");
    scanf("%d",&cols);
    //init
    sparseMatrix.rows[0] = rows;
    sparseMatrix.cols[0] = cols;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("enter the element at %d %d",i,j);
            scanf("%d",&ele);
            
        }
    }
}