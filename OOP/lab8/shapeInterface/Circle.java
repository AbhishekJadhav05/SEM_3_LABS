package lab8.shapeInterface;

class Circle implements Shape {
    double radius;

    // Constructor to initialize radius
    Circle(double radius) {
        this.radius = radius;
    }

    // Implement the area() method for circle
    @Override
    public double area() {
        return Math.PI * radius * radius;
    }
}