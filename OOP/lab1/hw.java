import java.util.*;
public class hw{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter Length : ");
        double Length = scanner.nextDouble();
        System.out.println("enter Breath : ");
        double Breath = scanner.nextDouble();
        double area = Length*Breath;
        System.out.println("area is : "+area);
        System.out.println("circumference : "+(2*(Length+Breath)));
        scanner.close();
        System.out.println();
    }
}
