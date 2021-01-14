#include <iostream>
using namespace std;

int main()
{
    string a;
    a.resize(6);
    a[5] = 'y';
    a[3] = 'o';
    a[2] = 'b';
    cout << a;

    return 0;
}