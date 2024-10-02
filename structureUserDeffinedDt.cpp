#include <iostream>

using namespace std;

struct human
{
    int age;
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
}