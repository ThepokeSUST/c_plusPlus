#include <iostream>

using namespace std;
enum D
{
    a,
    b,
    c
};
struct A
{
    /* data */
    int a = 4;
    int b;
};

int main()
{
    cout << a << " " << b << " " << c;
    cout << endl
         << sizeof(a) << endl;
    cout << sizeof(D) << endl;

    A aa;
    cout << aa.a << " " << aa.b;
}