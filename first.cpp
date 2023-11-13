#include <iostream>

int main()
{
    std::cout << "first number: ";
    int a=0;
    std::cin >> a;
    int b = a+3;
    int c = a+b;
    
    std::cout << a << " "<< b << " "<< c;
}
