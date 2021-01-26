#include <vector>
#include <iostream>
using namespace std;

int main()
{
    vector<int> vec(3, 100);
    cout << "Vector size: " << vec.size() << endl;
    cout << "Is empty? " << vec.empty() << endl;
    cout << "First Element: " << vec.at(0) << endl;

    vec.pop_back();
    cout << "Vector size: " << vec.size() << endl;
    cout << "Final Element: " << vec.back() << endl;

    vec.clear();
    cout << "Vector size: " << vec.size() << endl;

    vec.push_back(200);
    cout << "Vector size: " << vec.size() << endl;
    cout << "First Element: " << vec.front() << endl;

    return 0;
}