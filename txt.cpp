#include<iostream>

int main()
{
    int SomeNum;
    int *ptr = &SomeNum;

    std::cout << ptr << "\n" << SomeNum; 
    return 0;
}