public class TestBox {
    public static void main(String[] args) {
        Box b = new Box(2,3,4);
        System.out.println("Box");
        b.display();

        Box3D b3 = new Box3D(5,6,7);
        System.out.println("\nBox3D");
        b3.display();

        b3.setDimensions(10,10,10);
        System.out.println("\nUpdated Box3D");
        b3.display();
    }
}
