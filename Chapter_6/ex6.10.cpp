#include <iostream>

void Swap(int *p1, int *p2)
{
    int tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}

int main()
{
    int a = 5, b = 10;
    int *r = &a, *s = &b;
    std::cout<<*r<<'\t'<<*s<<std::endl;
    Swap(r, s);
    std::cout<<*r<<'\t'<<*s<<std::endl;
    
    return 0;
}