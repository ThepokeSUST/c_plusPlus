#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    char ch[] = "dipok nath";
    cout << ch;
    cout << endl;
    cout.write(ch, 5);
    cout << endl;

    cout.put('A');
    cout << endl;

    float f = 3.14155f;
    cout << "actual " << f << endl;
    cout.precision(3);
    cout << f << endl;
    int ok;
    //  cout.precision(10);
    cout << f << endl;
    cout << "actual " << f << endl;
    cout << setprecision(10) << f << " " << f << endl;
    cout << "actual " << f << endl;
    float ff = 3.23234545454;
    cout << ff << endl;
}