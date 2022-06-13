//15 컴파일 오류가 나는 이유?
//클래스 상속 시 보호로 상속할 수 없음에도 불구하고 Derived를 보호로 상속하였으므로 오류발생

#include <iostream>
using namespace std;

class Base{
protected:
    int a, b;
public:
    void setab(int n, int m) {a=n; b=m;}
};

class Derived : protected Base{
    int c;
public:
    void setc(int n) {c=n;}
    void showabc(){
        cout << a << ' ' << b << ' ' << c << endl;
    }
};

int main(){
    Derived ob;
    // ob.setab(1, 2);
    ob.setc(3);
    ob.showabc();
    return 0;
}