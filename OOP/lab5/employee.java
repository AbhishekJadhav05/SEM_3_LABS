package lab5;

import java.util.Scanner;

public class employee {
    String name,city;
    int basic_salary;
    double DA,HRA;

    void getData(){
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter name : ");
        name = scanner.next();
        System.out.println("enter basic salary : ");
        basic_salary = scanner.nextInt();
        System.out.println("enter DA : ");
        DA = scanner.nextDouble();
        System.out.println("enter HRA : ");
        HRA = scanner.nextDouble();
        scanner.close();
    }
    double calculate(){
        return basic_salary+basic_salary*DA/100+basic_salary*HRA/100;
    }
    void display(){
        System.out.println("total salary : "+calculate());
    }
    public static void main(String[] args) {
        employee employee = new employee();
        employee.getData();
        employee.display();
    }
}
