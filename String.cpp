#include <ios>
#include <iostream>
#include <limits>
using namespace std;

int main()
{

    /* char ch[] = {'a', 'b', '\0'};
     int n = sizeof(ch);
     cout << n << endl;
     cout << ch;*/

    // another (get())

    /*int arr[] = {2, 45, 4, 43};
    cout << arr << endl; // this print address......

    char ch[9];
    cin.get(ch, 9); // this also add null character in the last
    int n = sizeof(ch);
    cout << "size " << n << endl;
    cout << ch;
    cout << endl;
    */
    // another (getline())

    /*int arr[9];
    cout << sizeof(arr); // this will return size*sizeof(int)......
    char ch[9];
    cin.getline(ch, 9);
    cout << sizeof(ch) << endl;
    cout << ch << endl;
    string str;
    cout << sizeof(str) << endl;
    getline(cin, str);
    cout << str << " size-> " << sizeof(str);
    */

    // another (read())
    /*char ch[9];
    cin.read(ch, 7);
    // ch[7] = '\0';
    cout << sizeof(ch) << endl;
    cout << ch << endl;
    return 0;*/

    // another (ignore())

    char ch[9];
    int x;
    cin >> x;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cin.getline(ch, 9);
    cout << "int " << x << endl;
    cout << "string " << ch << endl;
}
