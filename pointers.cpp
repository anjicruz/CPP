#include <iostream>
int main()
{
    int32_t x=0;
    int32_t* y=&x;
    std::cout << "x=" << *y << std::endl;
    return 0;
}