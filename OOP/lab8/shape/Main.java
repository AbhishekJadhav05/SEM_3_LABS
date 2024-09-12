package lab8.shape;

public class Main {
    public static void main(String[] args) {
        Shape shape;
        shape = new Rectangle();
        System.out.println(shape.rectangle(5, 10));
        shape = new Circle();
        System.out.println(shape.circle(5));
    }
}
