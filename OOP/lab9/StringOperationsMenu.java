package lab9;

import java.util.Scanner;
import java.util.Arrays;

public class StringOperationsMenu {

    // Method to check if a string is a palindrome
    public static boolean isPalindrome(String str) {
        String reversed = new StringBuilder(str).reverse().toString();
        return str.equals(reversed);
    }

    // Method to sort a string in alphabetical order
    public static String sortAlphabetically(String str) {
        char[] charArray = str.toCharArray();
        Arrays.sort(charArray);
        return new String(charArray);
    }

    // Method to reverse a string
    public static String reverseString(String str) {
        return new StringBuilder(str).reverse().toString();
    }

    // Method to concatenate the original string with its reversed version
    public static String concatenateWithReversed(String str) {
        return str + reverseString(str);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        // Input the string
        System.out.println("Enter the string: ");
        String input = sc.nextLine();
        
        int choice;
        do {
            // Display the menu
            System.out.println("\nMenu:");
            System.out.println("1. Check if the string is a palindrome");
            System.out.println("2. Write the string in alphabetical order");
            System.out.println("3. Reverse the string");
            System.out.println("4. Concatenate the original string and the reversed string");
            System.out.println("5. Exit");
            
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            sc.nextLine();  // Consume newline left-over
            
            switch (choice) {
                case 1:
                    // Check if the string is a palindrome
                    if (isPalindrome(input)) {
                        System.out.println("The string is a palindrome.");
                    } else {
                        System.out.println("The string is not a palindrome.");
                    }
                    break;
                
                case 2:
                    // Sort the string alphabetically
                    String sortedString = sortAlphabetically(input);
                    System.out.println("String in alphabetical order: " + sortedString);
                    break;
                    
                case 3:
                    // Reverse the string
                    String reversedString = reverseString(input);
                    System.out.println("Reversed string: " + reversedString);
                    break;
                    
                case 4:
                    // Concatenate the original string with its reversed version
                    String concatenatedString = concatenateWithReversed(input);
                    System.out.println("Concatenated string: " + concatenatedString);
                    break;
                    
                case 5:
                    // Exit
                    System.out.println("Exiting the program.");
                    break;
                    
                default:
                    System.out.println("Invalid choice! Please try again.");
            }
        } while (choice != 5);
        
        sc.close();
    }
}
