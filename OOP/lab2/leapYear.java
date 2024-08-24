import java.util.Scanner;

public class leapYear{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the year : ");
        int year = scanner.nextInt();
        
        if(year%4 != 0 ){
            System.out.println("not a leap year");
        }
        else if(year%100 !=0){
            System.out.println("leap year");
        }
        else if(year%400 !=0){
            System.out.println("not a leap year");
        }
        else{
            System.out.println("leap year");
        }
        scanner.close();
    }
}
