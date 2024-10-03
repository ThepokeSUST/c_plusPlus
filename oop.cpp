#include <iostream>

using namespace std;

class A
{
    int a;
    int b;

public:
    A()
    {
    }
    A(int a, int b);
    void display();
};

A::A(int a, int b)
{
    this->a = a;
    this->b = b;
}
void A::display()
{
    cout << "a " << this->a << endl;
    cout << "b " << this->b << endl;
}

int main()
{
}