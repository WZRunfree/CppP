#include <iostream>
#include <string>

using namespace std;

int main()
{
    string currString, preString;
    bool bl = true;

    while (cin>>currString) {
        if (preString == currString) {
            cout<<currString<<endl;
            bl = false;
            break;
        }
        preString = currString;
    }

    if (bl)
        cout<<"there is no repeat!"<<endl;
    
    return 0;
}