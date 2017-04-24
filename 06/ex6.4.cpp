#include <iostream>

int fact(int val)
{
    if (val < 0)
        return -1;
    int ret = 1;
    for(int i=1; i != val + 1; i++)
        ret *= i;
    
    return ret;
}

int main()
{
    int num;
    std::cout<<"Pls input a number:"<<std::endl;
    std::cin>>num;
    std::cout<<"The factorial of\t"<<num<<"\tis:\t"<<fact(num)<<std::endl;

    return 0;
}