package lab5;

import java.util.Scanner;

public class test {
    int hour;
    int minute;
    int second;
    test(){
        this.hour = 0;
        this.minute = 0;
        this.second = 0;
    }
    test(int hour,int minute,int second){
        this.hour = hour;
        this. minute = minute;
        this.second = second;
    }
    void add(time time1,time time2){
        int hour,minute=0,second=0;
        hour = time1.hour+time2.hour;
        if(time1.minute + time2.minute> 60){
            hour++;
            minute = time1.minute+time2.minute -60;
        }else{
            minute = time1.minute+time2.minute;
        }
        if(time1.second + time2.second> 60){
            minute++;
            second = time1.second+time2.second -60;
        }
        else{
            second = time1.second+time2.second;
        }
        System.out.println("hours : "+hour);
        System.out.println("minutes : "+minute);
        System.out.println("seconds : "+second);
    }
    void display(time time){
        System.out.println("hours : "+time.hour);
        System.out.println("minutes : "+time.minute);
        System.out.println("seconds : "+time.second);
    }
    public static void main(String[] args) {
        int[] hour = new int[2];
        int[] minute = new int[2];
        int[] second = new int[2];

        Scanner scanner = new Scanner(System.in);
        for(int i=0;i<2;i++){
            System.out.println("enter hours : ");
            hour[i] = scanner.nextInt();
            System.out.println("enter minutes : ");
            minute[i] = scanner.nextInt();
            System.out.println("enter seconds : ");
            second[i] = scanner.nextInt();
        }
        time time1 = new time(hour[0], minute[0], second[0]);
        time time2 = new time(hour[1],minute[1],second[1]);
        time1.display(time1);
        time2.display(time2);
        time1.add(time1,time2);
        scanner.close();
    }
}
