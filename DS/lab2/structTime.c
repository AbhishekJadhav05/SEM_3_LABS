#include<stdio.h>
struct time{
    int second;
    int minute;
    int hour;
}time[2];

void read(){
    for(int i=0;i<=1;i++){
        printf("enter hour : ");
        scanf("%d",&time[i].hour);
        printf("enter minutes: ");
        scanf("%d",&time[i].minute);
        printf("enter seconds : ");
        scanf("%d",&time[i].second); // is scanf("%d",time[n]) and scanf("%d",time[n][0]) same base address ?
    }
}
void display(struct time time){
        printf("hour : %d \n",time.hour);
        printf("minute: %d \n",time.minute);
        printf("second : %d \n",time.second);
        printf("\n");
}
        
struct time add(struct time* time1, struct time* time2) {
    struct time result;
    
    result.second = time1->second + time2->second;
    result.minute = time1->minute + time2->minute;
    result.hour = time1->hour + time2->hour;
    
    // Handle seconds overflow
    if (result.second >= 60) {
        result.second -= 60;
        result.minute++;
    }

    // Handle minutes overflow
    if (result.minute >= 60) {
        result.minute -= 60;
        result.hour++;
    }

    return result;
}
struct time diff(struct time* time1, struct time* time2) {
    struct time result;
    
    // Initialize result
    result.hour = time1->hour - time2->hour;
    result.minute = time1->minute - time2->minute;
    result.second = time1->second - time2->second;

    // Handle seconds underflow
    if (result.second < 0) {
        result.second += 60;
        result.minute--;
    }

    // Handle minutes underflow
    if (result.minute < 0) {
        result.minute += 60;
        result.hour--;
    }

    return result;
}
void main(){
    printf("enter both time objects :\n");
    read();
    printf("addition of time :\n");
    display(add(&time[0],&time[1]));
    printf("\n");
    printf("subtraction of time :\n");
    display(diff(&time[0],&time[1]));
}