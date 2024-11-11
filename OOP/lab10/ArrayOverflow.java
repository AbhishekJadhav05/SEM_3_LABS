package lab10;
import java.util.Scanner;

public class ArrayOverflow {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get the size of the array from the user
        System.out.print("Enter the size of the array: ");
        int size = scanner.nextInt();

        // Create an array with the specified size
        int[] array = new int[size];

        // Get elements of the array from the user
        System.out.println("Enter " + size + " elements for the array:");
        for (int i = 0; i < size; i++) {
            System.out.print("Element " + (i + 1) + ": ");
            array[i] = scanner.nextInt();
        }

        // Prompt user to enter the index they want to access
        System.out.print("Enter an index to access: ");
        int index = scanner.nextInt();

        try {
            // Try to access the element at the given index
            System.out.println("Element at index " + index + ": " + array[index]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Error: Attempted to access an index out of bounds.");
        }

        // Close the scanner to prevent resource leakage
        scanner.close();
    }
}
