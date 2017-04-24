#include <iostream>
#include <string>

using namespace std;

int main(){
    string str1, str2;
    cout<<"Input two string:"<<endl;
    cin>>str1>>str2;

    if(str1 != str2)
        cout<<"different!!!"<<endl;
    else
        cout<<"same!"<<endl;

    return 0;
}