import java.util.Scanner;

public class armstrong {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a number : ");
        int num = scanner.nextInt();
        int arms = 0;
        int temp = num;
        int digits = 0;
        while(temp>0){   
        temp = temp/10;   
        digits++;   
        }  
        temp = num;
        while(num>0){
            arms += Math.pow((num%10),digits);
            num = num/10;
        }
        if(arms == temp){
            System.out.println("armstrong");
        }
        else{
            System.out.println("not armstrong");
        }
        scanner.close();
    }
}
