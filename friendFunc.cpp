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
A::A(int a) : a(a)
{
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

// function with default argument
int add(int a, int b, int c = 10)
{
    return a + b + c;
}
int main()
{
    A a(4);
    a.dis();
    set(a, 100);
    a.dis();
    cout << add(2, 3);
}