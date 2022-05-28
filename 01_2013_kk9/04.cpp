//04 static

#include <iostream>
using namespace std;

class A
{
    public:
    A(int aa=10)
    {
        a = aa;
    }
    void setA()
    {
        a = b;
    }
    int getA()
    {
        return a;
    }
    static void setB(int bb)
    {
        b = bb;
    }
    static int getB()
    {
        return b;
    }

    private:
    int a;
    static int b;
};
int A::b = 20;
int main()
{
    A obj1;
    A obj2(30);
    //obj1 : a(10), b(20)
    //obj2 : a(30), b(20)
    obj1.setA();
    //obj1 : a(20), b(20)
    //obj2 : a(30), b(20)
    obj2.setB(40);
    //obj1 : a(20), b(40)
    //obj2 : a(30), b(40)
    obj2.setA();
    //obj1 : a(20), b(40)
    //obj2 : a(40), b(40)
    obj2.setB(50);
    //obj1 : a(20), b(50)
    //obj2 : a(40), b(50)
    cout << obj1.getA() << " " << obj1.getB() << endl; //20 50
}