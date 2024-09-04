public class NumberPattern {
    public static void main(String[] args) {
        int[] numbers = {1, 2, 3, 4, 5};
        for (int num : numbers) {
            for (int i = 0; i < num; i++) {
                System.out.print(num);
            }
            System.out.println(); 
        }
    }
}