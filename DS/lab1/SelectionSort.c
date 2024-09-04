#include<stdio.h>

void main(){

    int length = 0;
    int arr[50];
    printf("enter the length of the array : ");
    scanf("%d",&length);

    for(int i=0;i<length;i++){
        printf("enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
    //sorting
    int check = 0;
    int min = 0;
    int pos = 0;
    int temp = 0;
    for(int i = 0;i<length;i++){
            min = arr[i];
        for(int j = i+1;j<length;j++){
            if(arr[j]<min){
                min = arr[j];
                pos = j;
                check = 1;
            }
        }
        if(check == 0){
            continue;
        }
        temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
        check = 0;
    }
    printf("sorted array : ");
    for(int i=0;i<length;i++){
        printf("%d",arr[i]);
   }
}

