#include <iostream>
using namespace std;
int addNumbers(int, int);
int main()
{
    int result{0};
    result = addNumbers(100, 200);
    return 0;
}
int addNumbers(int a, int b)
{
    return a + b;
}
