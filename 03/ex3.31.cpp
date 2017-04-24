#include <iostream>

using namespace std;

int main(){
    constexpr size_t sz = 10;
    int a[sz], b[sz];

    for(int i=0; i<sz; i++){
        a[i] = i;
        b[i] = a[i];
    }

    for(auto val : a)
        cout<<val<<" ";
    cout<<endl;

    for(auto val : b)
        cout<<val<<" ";
    cout<<endl;

    return 0;
}