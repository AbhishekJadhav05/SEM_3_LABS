package lab9;

import java.util.Scanner;

public class StringMenuProgram {

    // Method to compare two strings
    public static void compareStrings(String str1, String str2) {
        if (str1.equals(str2)) {
            System.out.println("The strings are equal.");
        } else {
            System.out.println("The strings are not equal.");
        }
    }

    // Method to convert uppercase to lowercase and vice-versa
    public static String convertCase(String str) {
        StringBuilder convertedStr = new StringBuilder(str.length());

        for (char ch : str.toCharArray()) {
            if (Character.isUpperCase(ch)) {
                convertedStr.append(Character.toLowerCase(ch));
            } else if (Character.isLowerCase(ch)) {
                convertedStr.append(Character.toUpperCase(ch));
            } else {
                convertedStr.append(ch);  // for non-alphabetical characters
            }
        }
        return convertedStr.toString();
    }

    // Method to check if a string is a substring of another
    public static boolean isSubstring(String str1, String str2) {
        return str1.contains(str2);
    }

    // Method to replace a substring with "Hello"
    public static String replaceSubstring(String str1, String str2) {
        if (isSubstring(str1, str2)) {
            return str1.replace(str2, "Hello");
        } else {
            return str1;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1, str2;

        // Input the two strings
        System.out.println("Enter the first string: ");
        str1 = sc.nextLine();
        System.out.println("Enter the second string: ");
        str2 = sc.nextLine();

        int choice;
        do {
            // Display the menu
            System.out.println("\nMenu:");
            System.out.println("1. Compare two strings");
            System.out.println("2. Convert uppercase characters to lowercase and vice-versa");
            System.out.println("3. Check if the second string is a substring of the first");
            System.out.println("4. Replace the second string with 'Hello' if it's a substring");
            System.out.println("5. Exit");

            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            sc.nextLine();  // Consume newline left-over

            switch (choice) {
                case 1:
                    // Compare the two strings
                    compareStrings(str1, str2);
                    break;

                case 2:
                    // Convert case of the first string
                    String convertedString = convertCase(str1);
                    System.out.println("String with converted cases: " + convertedString);
                    break;

                case 3:
                    // Check if the second string is a substring of the first
                    if (isSubstring(str1, str2)) {
                        System.out.println("The second string is a substring of the first.");
                    } else {
                        System.out.println("The second string is not a substring of the first.");
                    }
                    break;

                case 4:
                    // Replace the second string with "Hello" in the first string if it's a substring
                    if (isSubstring(str1, str2)) {
                        String replacedString = replaceSubstring(str1, str2);
                        System.out.println("Modified string: " + replacedString);
                    } else {
                        System.out.println("The second string is not a substring, so no replacement was done.");
                    }
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
