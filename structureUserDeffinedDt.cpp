#include <iostream>

using namespace std;

struct point
{
    int x;
    int y;
};
struct twopoint
{
    point left;
    point right;
};

struct human
{
    int age;
    int a;
    string name;
} B;
typedef struct animal
{

    int age;
    string name;
    animal(int a)
    {
        this->age = a;
    }
} poshu, a;

int main()
{
    human D;
    D.age = 20;
    D.name = "dipok";
    struct human C;
    C.age = 21;
    C.name = "dipu";

    cout << C.name << " " << D.name << endl;

    cout << B.age << endl;

    a n(34);
    // n.age = 34;
    n.name = "dog";

    poshu m(23);
    // m.age = 23;
    m.name = "cat";
    cout << n.name << " " << n.age << " " << m.name << " " << m.age;

    // initialize by {}
    human ok = {1, 2, "dipu"};
    cout << endl;
    cout << ok.age << " " << ok.a << " " << ok.name << "ok" << endl;

    twopoint pp;
    pp.left.x = 3;
    pp.left.y = 4;
    pp.right.x = 5;
    pp.right.y = 6;

    cout << pp.left.x << " " << pp.left.y << "    " << pp.right.x << " " << pp.right.y << endl;

    twopoint ppp = {{1, 2}, {3, 4}};
    cout << ppp.left.x << " " << ppp.left.y << "    " << ppp.right.x << " " << ppp.right.y << endl;
}