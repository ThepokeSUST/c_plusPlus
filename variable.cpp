#include <iostream>

using namespace std;

class Human
{

    // this age is a instance variable......
    int age;
    // this is static variable......
    // default value is null

public:
    static string species;

public:
    void speek()
    {
        // this is also local variable......
        string str = "talk";
        cout << str << endl;
        // this will work
        // in non static func we can use static variable also......
        // cout << species << endl;
    }

    static void stat()
    { // this shows error......
        // cout << age << endl;

        // this work
        cout << species << endl;
    }
};

string Human::species = "manush";

int main()
{
    // this is declaration
    int a, b;
    // this is initialisation
    a = 10;
    // this is definition
    //  definition= declaration + initialisation......
    int d = 20;
    // a,b,d all are local variable ......

    Human dipok;
    dipok.speek();
    // this is allowed but not recommended......
    dipok.stat();
    Human::species = "ok";
    Human::stat();
    // the variable c's life is as same as the program's life......
    // default value is empty string......
    static string c;
    cout << c << endl;
}