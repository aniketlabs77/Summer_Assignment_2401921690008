class Box {
    protected double length, breadth, height;

    public Box() {
        length = breadth = height = 0;
    }

    public Box(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    public void setDimensions(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    public double area() {
        return 2 * (length * breadth + breadth * height + height * length);
    }

    public double volume() {
        return length * breadth * height;
    }

    public void display() {
        System.out.println("Length = " + length);
        System.out.println("Breadth = " + breadth);
        System.out.println("Height = " + height);
        System.out.println("Area = " + area());
        System.out.println("Volume = " + volume());
    }
}
