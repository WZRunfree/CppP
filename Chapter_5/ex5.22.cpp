#include <iostream>
#include <stdexcept>

int main()
{
    int Val1, Val2;
    while(std::cin>>Val1>>Val2) {
        try {
            if (Val2 == 0)
                throw std::runtime_error("The seconed num is 0!");
            std::cout<<Val1/Val2<<std::endl;
        } catch (std::runtime_error err) {
            std::cout<<err.what()
                <<"\tTry again? y/n"<<std::endl;
            char c;
            std::cin>>c;
            if (!std::cin || c == 'n')
                break;
        }
    }

    return 0;
}