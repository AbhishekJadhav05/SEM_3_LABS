#include<stdio.h>

void main(){

    int length = 0;
    int arr[50];
    int temp = 0;
    printf("enter the length of the array : ");
    scanf("%d",&length);

    for(int i=0;i<length;i++){
        printf("enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
    //sorting
    for(int i = 0;i<length;i++){
        for(int j = i+1;j<length;j++){
            if(arr[j]<arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

    }
    //printing
    printf("sorted array : ");
    for(int i=0;i<length;i++){
        printf("%d",arr[i]);
    }
}
