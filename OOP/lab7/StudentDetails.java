package lab7;

import java.util.ArrayList;
import java.util.Scanner;

public class StudentDetails {
    final String collegeName = "MIT";
    String name;
    long id;
    static int student_number;
    StudentDetails(String name,long id){
        this.name = name;
        this.id = id;
        student_number++;
    }
    void displayDetails(){
        System.out.println("College Name : "+ collegeName);
        System.out.println("name : "+this.name);
        System.out.println("ID : "+this.id);
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        ArrayList<StudentDetails> students = new ArrayList<StudentDetails>();
        while (true) {
            System.out.println("enter student name : ");
            String name = scanner.next();
            System.out.println("enter student ID : ");
            long id = scanner.nextLong();
            students.add(new StudentDetails(name, id));
            System.out.println("do you want to terminate? y/n : ");
            char choice = scanner.next().charAt(0);
            if (choice == 'y') {
                break;
            }
        }
        System.out.println("Student Details : ");
        for (int i = 0; i < student_number; i++) {
            System.out.println("Student " + (i + 1) + ":");
            students.get(i).displayDetails();
            System.out.println();
        }
        System.out.println("total entries : "+student_number);
    }
}