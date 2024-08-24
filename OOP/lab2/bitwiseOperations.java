import java.util.Scanner;

public class bitwiseOperations {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a number : ");
        int num =  scanner.nextInt();
        System.out.println("do you want to divide or multiply by 2?");
        String decide = scanner.next();
        if(decide.equalsIgnoreCase("multiply")){
            System.out.println(num<<1);
        }
        if(decide.equalsIgnoreCase("divide")){
            System.out.println(num>>1);
        }
        scanner.close();
    }
    
}
