#include <iostream>
#include "Chapter6.h"

int main()
{
    int num;
    std::cout<<"Pls input a number:"<<std::endl;
    std::cin>>num;
    std::cout<<"The factorial of\t"<<num<<"\tis:\t"<<fact(num)<<std::endl;

    return 0;
}