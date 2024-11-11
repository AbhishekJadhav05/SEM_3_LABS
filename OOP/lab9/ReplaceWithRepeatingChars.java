package lab9;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ReplaceWithRepeatingChars {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input the word
        System.out.println("Enter a word: ");
        String input = sc.nextLine();

        // Find repeating characters
        String repeatingChars = getRepeatingCharacters(input);

        // If there are repeating characters, replace all characters with them
        if (!repeatingChars.isEmpty()) {
            String replacedWord = repeatingChars.repeat(input.length());
            System.out.println("Word with repeating characters: " + replacedWord);
        } else {
            System.out.println("No repeating characters found in the word.");
        }
    }

    // Method to find all repeating characters in the word
    public static String getRepeatingCharacters(String word) {
        Map<Character, Integer> charCountMap = new HashMap<>();
        StringBuilder repeatingChars = new StringBuilder();

        // Count occurrences of each character
        for (char ch : word.toCharArray()) {
            charCountMap.put(ch, charCountMap.getOrDefault(ch, 0) + 1);
        }

        // Find characters that occur more than once
        for (Map.Entry<Character, Integer> entry : charCountMap.entrySet()) {
            if (entry.getValue() > 1) {
                repeatingChars.append(entry.getKey());
            }
        }

        return repeatingChars.toString();
    }
}
