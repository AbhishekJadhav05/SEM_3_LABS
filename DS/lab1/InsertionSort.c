#include<stdio.h>

void main(){

    int length = 0;
    int arr[50];
    printf("enter the length of the array : ");
    scanf("%d",&length);


    int temp =0;
    for(int i=0;i<length;i++){
        printf("enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
    //sorting
    int i=0;
    for(int j=1;j<length;j++){
        i = j-1;
        temp = arr[j];
        while(i>=0 && arr[i]>temp){
            arr[i+1] = arr[i];
            i--;
        }
        arr[i+1]=temp;
    }
    printf("sorted array : ");
    for(int i=0;i<length;i++){
        printf("%d",arr[i]);
   }
}

