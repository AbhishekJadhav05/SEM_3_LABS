package lab8.shape;

class Circle extends Shape {
    double radius;

    // Constructor to initialize radius
    Circle(double radius) {
        this.radius = radius;
    }

    // Implement the area() method for circle
    @Override
    double area() {
        return Math.PI * radius * radius;
    }
}
