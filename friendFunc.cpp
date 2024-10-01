#include <iostream>

using namespace std;
class A
{
    int a;

public:
    A()
    {
        a = 10;
    }
    A(int a);
    void dis();
    friend void set(A &obj, int a);
};
// constructor
A::A(int a)
{
    this->a = a;
}
// method definition
void A::dis()
{
    cout << this->a << endl;
}
// friend function
void set(A &obj, int a)
{
    obj.a = a;
}
int main()
{
    A a(4);
    a.dis();
    set(a, 100);
    a.dis();
}