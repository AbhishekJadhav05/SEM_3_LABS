#include<stdio.h>

void main(){

    int length = 0;
    int arr[50];
    int element;    
    printf("enter the length of the array : ");
    scanf("%d",&length);
    printf("the element to be found : ");
    scanf("%d",&element);
    printf("enter elements :\n"); 
    for(int i=0;i<length;i++){
        
        scanf("%d",&arr[i]);
    }
    //binary search
    int start = 0;
    int end = length-1;
    int mid = (start+end)/2;
    int flag = 0;
    while(start<=end){
        if(arr[mid]<element){
            start = mid+1;
        }
        else if(arr[mid] > element){
            end = mid -1;
        }
        else{
            printf("element found at index : %d",mid);
            flag =1;
            break;
        }
        mid = (start+end)/2;
    }
    if(!flag){
        printf("element not in the array");
    }
}
