#include <iostream>
#include <ctime>


using namespace std;

int main(){
    const int sz = 5;
    int a[sz], b[sz];
    srand( (unsigned) time (NULL) );  //
    for(int i=0; i != sz; i++)
        a[i] = rand() % 10;

    int guessVal;
    for(int i = 0; i<sz; i++){
        if(cin>>guessVal)
            b[i] = guessVal;
    }

    for(auto val : a)
        cout<<val<<" ";
    cout<<endl;
    for(auto val : b)
        cout<<val<<" ";
    cout<<endl;

    // compera
    int *p = begin(a), *q = begin(b);
    while(p != end(a) && q != end(b)){
        if(*p != *q){
            cout<<"different!!!"<<endl;
            return -1;
        }
        ++p;
        ++q;
    }

    return 0;
}