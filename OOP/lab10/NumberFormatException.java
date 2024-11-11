package lab10;

import java.util.Scanner;

public class NumberFormatException {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number: ");
        String input = sc.nextLine();

        try {
            // Attempt to convert the input string to an integer
            int number = Integer.parseInt(input);
            System.out.println("You entered the number: " + number);
        } catch (java.lang.NumberFormatException e) {
            // Handle invalid input
            System.out.println("Invalid input. Please enter a valid number.");
        }

        sc.close();
    }
}

