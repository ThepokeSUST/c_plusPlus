#include <iostream>

using namespace std;
class A
{
    int a;
    int b;

public:
    A(int a = 9, int b = 10)
    {
        this->a = a;
        this->b = b;
        cout << "this " << this
             << endl;
    }
    void display();
    static void st();
};
void A::st()
{
    // cout<<this->a;
    // can't use 'this' in static function......
}
void A::display()
{
    cout << a << " " << b;
    cout << endl;
}
int main()
{
    A obj(7, 8);
    obj.display();
    cout << " " << &obj << endl;
    A *ptr;
    ptr = &obj;
    ptr->display();
}