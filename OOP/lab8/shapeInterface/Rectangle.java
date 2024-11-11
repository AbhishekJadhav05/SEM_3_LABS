package lab8.shapeInterface;

class Rectangle implements Shape {
    double length, width;

    // Constructor to initialize length and width
    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }
    @Override
    public double area() {
        return length * width;
    }
}