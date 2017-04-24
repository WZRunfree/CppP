#include <iostream>

unsigned MyCnt()
{
    static unsigned iCnt = -1;
    return ++iCnt;
}

int main()
{
    std::cout<<"push any key"<<std::endl;
    char ch;
    while (std::cin >> ch)
    {
        std::cout<<"The function is called\t"<<MyCnt()<<"\ttimes!"<<std::endl;
    }
    return 0;
}