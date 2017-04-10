#include <iostream>

void reset(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int r = 3, s = 7;
    std::cout<<r<<'\t'<<s<<std::endl;
    reset(r, s);
    std::cout<<r<<'\t'<<s<<std::endl;

    return 0;
}