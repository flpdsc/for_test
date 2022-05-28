//05

#include <iostream>
using namespace std;

int f(int x=0, int y=1, int z=2)
{
    return (x+y+z);
}

int main()
{
    //f() :        x=0, y=1, z=2
    //f(3) :       x=3, y=1, z=2
    //f(3, 4) :    x=3, y=4, z=2
    //f(3, 4, 5) : x=3, y=4, z=5
    cout << f() + f(3) + f(3, 4) + f(3, 4, 5); //30
    return 0;  
}