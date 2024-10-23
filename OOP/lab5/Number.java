package lab5;

import java.util.Scanner;

public class Number {
    private double value;

    Number(double value){
        this.value = value;
    }
    boolean isZero(){
        return this.value == 0;
    }
    boolean isNegative(){
        return this.value < 0;
    }
    boolean isPositive(){
        return this.value > 0;
    }
    boolean isOdd(){
        return this.value % 2 != 0;
    }
    boolean isEven(){
        return this.value % 2 == 0;
    }
    boolean isPrime(){
        if(isNegative()){
            return false;
        }
        for(int i=0;i<this.value/2;i++){
            if(this.value%i == 0){
                return false;
            }
        }
        return true;
    }
    boolean isArmStrong(){

        int temp=(int)this.value;
        int digits=0;
        int arms=0;
        while(temp>0){   
            temp = temp/10;   
            digits++;   
            }  
            temp = (int)this.value;
            while((int)this.value>0){
                arms += (int) Math.pow(((int)this.value)%10,digits);
                this.value = (int)this.value/10;
            }
        return arms == temp;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a number : ");
        int num = scanner.nextInt();
        Number number = new Number(num);
        System.out.println("isZero isEven isOdd isPositive isNegative isPrime isArmstrong");
        System.out.println(number.isZero() +" "+
                            number.isEven() + " "+
                            number.isOdd() + " "+
                            number.isPositive()+ " "+
                            number.isNegative()+ " "+
                            number.isPrime()+ " "+
                            number.isArmStrong());
        scanner.close();
    }
}
