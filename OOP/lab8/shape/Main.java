package lab8.shape;

public class Main {
    public static void main(String[] args) {
        // Create a rectangle object
        Shape rectangle = new Rectangle(5, 3);
        System.out.println("Area of the rectangle: " + rectangle.area());

        // Create a circle object
        Shape circle = new Circle(4);
        System.out.println("Area of the circle: " + circle.area());
    }
}
