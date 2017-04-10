#include <iostream>
#include <vector>

using namespace std;

int main(){
    constexpr size_t sz = 10;
    vector<int> vInt1, vInt2;

    for(int i=0; i<sz; i++){
        vInt1.push_back(i);
        vInt2.push_back(vInt1[i]);
    }

    for(auto val : vInt1)
        cout<<val<<" ";
    cout<<endl;

    for(auto val : vInt2)
        cout<<val<<" ";
    cout<<endl;

    return 0;
}