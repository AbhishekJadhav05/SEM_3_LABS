package lab8.shapeInterface;

public class Circle implements Shape {
    final double PI = 3.14;
    @Override
    public double rectangle(double length,double breath) {
        throw new UnsupportedOperationException("Unimplemented method 'rectangle'");
    }

    @Override
    public double circle(double radius) {
        return PI*radius*radius;
    }
    
}
