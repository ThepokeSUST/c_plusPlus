#include <iostream>

using namespace std;
class A
{
    int a;
    int b;

public:
    A()
    {
        cout << "this is default\n";
    }
    A(int a, int b)
    {
        cout << "this is parameterize\n";
    }

private:
    ~A()
    {
        cout << "this is destructor\n";
    }

public:
    void des()
    {
        delete (this);
    }

    friend void deleteDes(A *);
};
void deleteDes(A *a)
{
    delete a;
}
int main()
{
    A *a = new A();
    // delete (a);
    a->des();

    A *b = new A();
    deleteDes(b);
}