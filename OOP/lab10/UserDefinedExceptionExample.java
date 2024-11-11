package lab10;

// User-defined exception class
class CustomException extends Exception {
    public CustomException(String message) {
        super(message); // Pass the custom message to the parent Exception class
    }
}

public class UserDefinedExceptionExample {
    public static void main(String[] args) {
        try {
            // Some condition to trigger the exception
            int value = 10;

            // Let's say we want to throw an exception if value exceeds 5
            if (value > 5) {
                throw new CustomException("Value exceeds the limit of 5!");
            }

        } catch (CustomException e) {
            // Catch and display the custom error message
            System.out.println("Caught Exception: " + e.getMessage());
        }
    }
}
