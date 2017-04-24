#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1, str2;
    string str;

    do {
        cout<<"input two string:"<<endl;
        cin>>str1>>str2;
        if (str1.size() < str2.size())
            cout<<str1<<endl;
        else
            cout<<str2<<endl;
        
        cout<<"continue? y\n"<<endl;
        cin>>str;
    }while(!str.empty() && str[0] != 'n');

    return 0;
}