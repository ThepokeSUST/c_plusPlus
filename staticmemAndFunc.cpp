#include <iostream>

using namespace std;
class A
{
    int a;

public:
    static const int b;
    static int bb;
    static const int c = 5;
    //  static const double d = 9; non integral
    static constexpr double d = 9.08;
    static string str;
    static void st()
    {
        cout << b << " " << str;
        cout << endl;
    }

public:
    A()
    {
        bb = 1;
        a = 4;
        // b = 9;
        str = "ds";
    }

    void display()
    {
        cout << a << " ";
    }
};
const int A::b = 8;
int A::bb = 1;
string A::str = " ";
int main()
{
    A a;
    // int A::b = 8;

    a.display();
    A::bb = 7;
    cout << A::b << endl;
    cout << A::str << endl;
    cout << A::d << endl;
}