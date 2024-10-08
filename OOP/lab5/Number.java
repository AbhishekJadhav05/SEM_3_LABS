package lab5;

import java.util.Scanner;

public class Number {
    private double value;

    Number(double value){
        this.value = value;
    }
    boolean isZero(){
        if(this.value == 0){
            return true;
        }
        return false;
    }
    boolean isNegative(){
        if(this.value < 0){
            return true;
        }
        return false;
    }
    boolean isPositive(){
        if(this.value > 0){
            return true;
        }
        return false;
    }
    boolean isOdd(){
        if(this.value %2 !=0){
            return true;
        }
        return false;
    }
    boolean isEven(){
        if(this.value %2 ==0){
            return true;
        }
        return false;
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
                arms += Math.pow(((int)this.value)%10,digits);
                this.value = (int)this.value/10;
            }
            if(arms == temp){
                return true;
            }
            else{
                return false;
            }
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter a number : ");
        Integer num = scanner.nextInt();
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
