package lab8.shapeInterface;

public class Rectangle implements Shape{

    @Override
    public double rectangle(double length, double breath) {
        return length*breath;
    }

    @Override
    public double circle(double radius) {
        throw new UnsupportedOperationException("Unimplemented method 'circle'");
    }
}
