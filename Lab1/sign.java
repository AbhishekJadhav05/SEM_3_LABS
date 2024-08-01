import java.util.*;
public class sign {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int pos=0;
        int neg=0;
        int zero=0;
        int num;
        for(int i =0;i<10;i++){
            System.out.println("enter number : ");
            num = scanner.nextInt();
            if(num>0){
                pos++;
            }
            else if(num<0){
                neg--;
            }
            else{
                zero++;
            }
            
        
        }
        System.out.println("positive : "+pos);
        System.out.println("negative : "+neg);
        System.out.println("zeros : "+zero);
        scanner.close();
    }
}
