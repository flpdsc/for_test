//07

#include <iostream>
using namespace std;

class Base
{
    public:
    virtual void vf(void)
    {
        cout << "hello\n";
    }
    void f1(void)
    {
        cout << "hello world\n";
    }
};

class Derived : public Base
{
    virtual void vf(void)
    {
        cout << "world\n";
    }
};

void foo(Base *bp)
{
    bp->vf();
};

int main()
{
    Base b;
    Base *bp = &b;
    Derived d;
    foo(&b); //hello
    bp->vf(); //hello
    bp = &d;
    bp->vf(); //world
    foo(&d); //world
    return 0;
}