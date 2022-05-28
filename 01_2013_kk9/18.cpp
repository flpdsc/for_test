//18

#include <iostream>
using namespace std;
int main()
{
    int result = 10, a = 2, b = 5;
    result += a++ * --b;
    cout << "result=" << result << ", a=" << a << ", b=" << b; //18 3 4
    return 0;
}