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
    //binary search
    int start = 0;
    int end = length-1;
    int mid = (start+end)/2;
    int check = 0;
    while(start<end){
        if(arr[mid] == element){
            printf("index : %d",mid);
            check = 1;
            break;
        }
        else if(arr[mid]>element){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = (start+end)/2;
    }
    //check
    if(check == 0){
        printf("element not in array");
    }

}
