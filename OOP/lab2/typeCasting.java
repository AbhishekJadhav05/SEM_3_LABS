import java.util.Scanner;

public class typeCasting {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a integer : ");
        int a = scanner.nextInt();
        System.out.println("enter a char : ");
        char b = scanner.next().charAt(0);
        System.out.println("enter a double : ");
        double c = scanner.nextDouble();
        System.out.println("int to byte : "+(byte)a);
        System.out.println("char to int : "+(int)b);    
        System.out.println("double to byte : "+(byte)c);
        System.out.println("double to int : "+(int)c);
        scanner.close();
    }
}
