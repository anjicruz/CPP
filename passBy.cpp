#include <iostream>
using namespace std;
void swapByVal(int num1,int num2); 
void swapByRef(int& num1,int& num2);

int main()
{
    int i=10,j=20;
    swapByVal(i,j);
    cout << i << " " << j << endl;
    swapByRef(i,j);
    cout << i << " " << j << endl;
    return 0;
}
void swapByVal(int num1,int num2) 
{
    int temp=num1;
    num1=num2;
    num2=temp;
}
void swapByRef(int& num1,int& num2) 
{
    int temp=num1;
    num1=num2;
    num2=temp;
}
