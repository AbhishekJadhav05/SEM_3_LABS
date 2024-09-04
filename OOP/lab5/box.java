package lab5;

import java.util.Scanner;

public class box {
    double width,height,depth;
    box(double width,double height,double depth){
        this.width = width;
        this.height = height;
        this.depth = depth;
    }
    double volume(){
        return this.height*this.width*this.depth;
    }
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("enter the dimensions of the box : ");
        box box = new box(scanner.nextDouble(),scanner.nextDouble(), scanner.nextDouble());
        System.out.println(box.volume());
        scanner.close();
    }
}
