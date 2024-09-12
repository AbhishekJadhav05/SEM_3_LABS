package lab8.shape;

public class Rectangle extends Shape {

    @Override
    public double rectangle(double length, double breath) {
        return length*breath;
    }

    @Override
    public double circle(double radius) {
        throw new UnsupportedOperationException("Unimplemented method 'circle'");
    }
}
