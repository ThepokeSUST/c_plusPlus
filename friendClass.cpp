#include <iostream>

using namespace std;

class human
{

    int age;
    string name;

public:
    human()
    {
    }
    human(int age, string name)
    {
        this->age = age;
        this->name = name;
    }
    void display()
    {
        cout << age << " " << name << endl;
    }

    friend class A;
};
class A
{
public:
    void display(human &obj);
};

void A::display(human &obj)
{
    cout << obj.age << " " << obj.name << endl;
}

int main()
{
    human a(20, "dipok");
    A b;
    b.display(a);
}