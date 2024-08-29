package Lab5;

import java.util.Scanner;

public class complex {
    void add(int num,int[] complex_num1){
        System.out.println("integer + complex : ");
        System.out.println("RE : "+(num+complex_num1[0]));
        System.out.println("IM : "+complex_num1[1]);
    }
    void add(int[] complex_num1,int[] complex_num2){
        System.out.println("complex + complex : ");
        System.out.println("RE : "+(complex_num1[0]+complex_num2[0]));
        System.out.println("IM : "+(complex_num1[1]+complex_num2[1]));
    }
    public static void main(String[] args) {
        int number;
        int[] complex1 =  new int[2];
        int[] complex2 = new int[2];
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter integer : ");
        number = scanner.nextInt();
        System.out.println("enter RE1 : ");
        complex1[0] = scanner.nextInt();
        System.out.println("enter IM2 : ");
        complex1[1] = scanner.nextInt();
        System.out.println("enter RE1 : ");
        complex2[0] = scanner.nextInt();
        System.out.println("enter IM2 : ");
        complex2[1] = scanner.nextInt();
        complex complex = new complex();

        complex.add(number,complex1);
        complex.add(complex1,complex2);
        scanner.close();
    }
}

