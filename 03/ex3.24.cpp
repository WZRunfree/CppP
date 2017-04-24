#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vInt{1, 2, 3, 4, 5};
    // int iVal;
    // cout<<"Input your vector:"<<endl;
    // while(cin>>iVal)
    //     vInt.push_back(iVal);
    if(vInt.begin() == vInt.end())
    {
        cout<<"empty!"<<endl;
        return -1;
    }
    cout<<"sum of neighbor:"<<endl;
    for(auto it = vInt.begin(); it != vInt.end()-1; it++)
    {
        cout<<*it + *(++it)<<" ";
        if((it - vInt.begin()) % 10 == 0)
            cout<<endl;
    }
    if(vInt.size() % 2 != 0)
        cout<<*(vInt.end()-1)<<endl;

    return 0;
}