public class TestOuter {
    public static void main(String[] args) {
        Outer o = new Outer();
        o.display();
        Outer.Inner i = o.new Inner();
        i.display();
    }
}
