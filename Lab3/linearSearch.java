import java.util.Scanner;

public class linearSearch {
    public static void main(String[] args) {
        int arr[] = {6,2,3,1,5,1};
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter number : ");
        int element = scanner.nextInt();
        for(int i=0;i<arr.length;i++){
            if(arr[i] == element){
                System.out.println("index = "+i);
            }
        }
        scanner.close();
    }
    
}
