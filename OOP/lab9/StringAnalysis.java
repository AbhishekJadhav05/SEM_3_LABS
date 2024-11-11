package lab9;

import java.util.Scanner;

public class StringAnalysis {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input the string
        System.out.println("Enter the string: ");
        String input = sc.nextLine();

        // Count characters (including spaces)
        int charCount = input.length();

        // Count words by splitting the string by spaces
        String[] words = input.split("\\s+");  // \\s+ means one or more spaces
        int wordCount = words.length;

        // Count lines by splitting on new lines
        String[] lines = input.split("\\n");
        int lineCount = lines.length;

        // Count vowels
        int vowelCount = countVowels(input);

        // Display the results
        System.out.println("Number of characters: " + charCount);
        System.out.println("Number of words: " + wordCount);
        System.out.println("Number of lines: " + lineCount);
        System.out.println("Number of vowels: " + vowelCount);
    }

    // Method to count vowels in a string
    public static int countVowels(String input) {
        int vowelCount = 0;
        String vowels = "aeiouAEIOU";

        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (vowels.indexOf(ch) != -1) {
                vowelCount++;
            }
        }
        return vowelCount;
    }
}
