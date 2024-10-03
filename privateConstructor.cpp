#include <iostream>

using namespace std;

class human
{
    int age;
    string name;

    human()
    {
        cout << "this is human  private default constructor\n";
    }
    friend void display(human &);
    friend class animal;

public:
    int b;
};

class animal
{
public:
    animal()
    {
        cout << "in animal constructor\n";
        human dipok;
    }
    int a;
};

void display(human &obj)
{
    cout << obj.age << " " << obj.name << endl;
}
int main()
{
    animal A;
}