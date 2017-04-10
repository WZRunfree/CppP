#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;

int main(){
    const int sz = 5;
    vector<int> a, b;
    int i = 0;

    srand( (unsigned) time (NULL) );  //
    for(i = 0; i != sz; i++)
        a.push_back( rand() % 10 );

    int guessVal;
    for(i = 0; i<sz; i++){
        if(cin>>guessVal)
            b.push_back(guessVal);
    }

    for(auto val : a)
        cout<<val<<" ";
    cout<<endl;
    for(auto val : b)
        cout<<val<<" ";
    cout<<endl;

    // compera
    auto it1 = a.cbegin(), it2 = b.cbegin();
    while(it1 != a.cend() && it2 != b.cend()){
        if(*it1 != *it2){
            cout<<"different!!!"<<endl;
            return -1;
        }
        ++it1;
        ++it2;
    }
    cout<<"sucessed!!!"<<endl;

    return 0;
}