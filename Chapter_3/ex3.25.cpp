#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<unsigned> vUS(11);
    auto it = vUS.begin();
    int iVal;
    while(cin>>iVal)
        if(iVal < 101)
            ++*(it + iVal / 10);
    cout<<vUS.size()<<'\t'<<*it<<endl;
    for(it = vUS.begin(); it != vUS.end(); ++it)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    return 0;
}