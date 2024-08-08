import java.util.Scanner;

public class calculator {
    public float multiply(float a, float b){
        return a*b;
    }
    public float add(float a, float b){
        return a+b;
    }
    public float subtract(float a, float b){
        return a-b;
    }
    public float divide(float a, float b){
        return a/b;
    }
    public static void main(String[] args) {
        calculator calculator = new calculator();
        char cont;
        float num1;
        float num2;
        Scanner scanner = new Scanner(System.in);
        do{
            System.out.println("enter number 1 : ");
            num1 = scanner.nextFloat();
            System.out.println("enter number 2 : ");
            num2 = scanner.nextFloat();
            System.out.println("enter the operation : ");
            switch (scanner.next().charAt(0)) {
                case '+':
                    System.out.println(calculator.add(num1,num2));
                    break;
                case '-':
                    System.out.println(calculator.subtract(num1,num2));
                    break;
                case '*':
                    System.out.println(calculator.multiply(num1,num2));
                    break;
                case '/':
                    System.out.println(calculator.divide(num1,num2));
                    break;

                default:
                    break;
            }
            System.out.println("do you want to perform another calculation?");
            cont = scanner.next().charAt(0);
        }while(cont == 'y');
        scanner.close();
    }
}
