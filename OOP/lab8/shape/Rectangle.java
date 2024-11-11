package lab8.shape;

class Rectangle extends Shape {
    double length, width;

    // Constructor to initialize length and width
    Rectangle(double length, double width) {
        this.length = length;
        this.width = width;
    }

    // Implement the area() method for rectangle
    @Override
    double area() {
        return length * width;
    }
}
