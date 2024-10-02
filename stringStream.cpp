#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

int main()
{

    string str = "dipok, deb, nath, dipu, cse";
    cout << str << endl;
    stringstream ss(str);
    string s;
    while (ss >> s)
    {
        cout << s << endl;
    }
    cout << str << endl;
    stringstream sss(str);
    while (getline(sss, s, ','))
    {
        cout << s << endl;
    }
    cout << endl
         << endl;

    // swap function
    string a = "sd sdsd";
    string b = "dfb fhd dff";
    a.swap(b);
    cout << a << endl
         << b;
    // resize function
    cout << endl
         << a.size() << endl;

    a.resize(5);
    cout << a.size() << endl;
    cout << a << endl;

    a.resize(9, 't');
    cout << a << endl;

    // at function
    cout << a.at(0) << endl;

    // append function
    a.append("dipu");
    cout << a << endl;

    // compare function
    string str1 = "dipo";
    string str2 = "dipok";
    // if equal return 0
    cout << str1.compare(str2) << endl;

    // substr function
    string res = str1.substr(3, 6);
    cout << res << endl;

    // find function
    int pos = str1.find('k');
    cout << pos << endl;

    // stoi function
    string st = "1092";
    int n = stoi(st);
    cout << n << endl;

    // replace function
    string re = "dipok nath";
    cout << re.length() << endl;
    cout << re << endl;
    re.replace(0, 5, 3, 'S');
    cout << re << endl
         << re.length() << endl;
    string name = "dipok";
    re.replace(0, 3, name);
    cout << re << endl;

    re.replace(3, 2, "dipu", 3, 1);
    cout << re << endl;

    re.pop_back();
    cout << re << endl;
    re.push_back('h');
    cout << re << endl;
    cout << endl;

    // strtok function
    char sr[] = "sdjd sjsdn ssd ";
    char *tok = strtok(sr, " ");
    while (tok != NULL)
    {
        cout << tok << endl;
        tok = strtok(NULL, " ");
    }
}