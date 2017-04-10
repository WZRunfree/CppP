#include <iostream>
#include <cstring>  //strcmp()

using namespace std;

int main(){

    char str1[40], str2[50];
    cout<<"Input two string:"<<endl;
    cin>>str1>>str2;

    if(strcmp(str1, str2) != 0)
        cout<<"different!!!"<<endl;
    else
        cout<<"same!"<<endl;

    return 0;
}