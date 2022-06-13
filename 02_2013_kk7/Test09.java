//09

class A{
    protected static int a=0;
    protected int b=0;
    public static void inc_a() {a++;}
    public void inc_b() {b++;}
    public void print(){
        System.out.println(a+" "+b);
    }
}

class B extends A{
    public static void inc_a() {a+=2;}
    public void inc_b() {b+=2;}
}

public class Test{
    public static void main(String[] args)
    {
        B y = new B();
        A z = new B();
        y.inc_a();
        y.inc_b();
        z.inc_a();
        z.inc_b();
        z.print();
    }
}