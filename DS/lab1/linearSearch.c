#include<stdio.h>

void main(){

    int length = 0;
    int arr[50];
    int element;
    printf("enter the length of the array : ");
    scanf("%d",&length);
    printf("the element to be found : ");
    scanf("%d",&element);

    for(int i=0;i<length;i++){
        printf("enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j<length;j++){
        if(arr[j] == element){
            printf("index is : %d\n",j);
        }
    }
}
