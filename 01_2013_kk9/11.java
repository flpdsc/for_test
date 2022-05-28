//11 extends, super()

class A
{
    A()
    {
        System.out.printf("%d ", 10); //1 (10)
    }
}

class B extends A
{
    B(int a)
    {
        System.out.printf("%d ", a); //2 (100)
    }
}

class C extends B
{
    C(int a)
    {
        super(a/10);
        System.out.printf("%d ", a); //3 (1000)
    }
}

class Test
{
    public static void main(String args[])
    {
        A b = new C(1000);
    }
}