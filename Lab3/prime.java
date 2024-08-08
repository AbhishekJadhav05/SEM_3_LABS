import java.util.Scanner;

public class prime {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int lower,upper;
        System.out.println("enter a lower limit : ");
        lower = scanner.nextInt();
        System.out.println("enter a upper limit : ");
        upper = scanner.nextInt();
        boolean check;
        for(int i = Math.max(lower,2); i<=upper;i++){
            check = true;
            for(int j=2;j<i;j++){ // i=2 will not get checked as j<i
                if(i%j == 0){
                    check = false;
                    break;
                }   
            }
            if(check == true){
                System.out.println(i);
            }
        }
        scanner.close();
    }
    
}
