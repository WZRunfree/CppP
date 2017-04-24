#include <iostream>

using namespace std;

int main(){
    const int sz = 5;
    int a[sz] = {0, 2, 4, 6, 8};

    for(auto val : a)
        cout<<val<<" ";
    cout<<endl;

    int *p = begin(a);
    while(p != end(a))
    {
        *p = 0;
        ++p;
    }

    for(auto val : a)
        cout<<val<<" ";
    cout<<endl;
    
    return 0;
}