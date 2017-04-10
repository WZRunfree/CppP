#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char str1[] = "hello", str2[] = "well";
    char str[strlen(str1) + strlen(str2) - 1];  //strlen()应该记录'\0'的空间，为什么这里没有？

    cout<<str1<<" "<<str2<<endl;
    cout<<strcpy(str, str1)<<endl;
    cout<<strcat(str, str2)<<endl;

    cout<<strlen(str1)<<" "<<strlen(str2)<<" "<<strlen(str)<<endl;
    return 0;
}