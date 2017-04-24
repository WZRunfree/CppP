#include <iostream>
#include <string>

using namespace std;

int main()
{
    string currString, preString;
    bool bl = true;

    while (cin>>currString) {
        // if (!isupper(currString[0]))
        //     continue;

        // if (preString == currString && isupper(currString[0])) {
        if (preString == currString) {
            if (!isupper(currString[0]))
                continue;
            else {
                cout<<currString<<endl;
                bl = false;
                break;
            }
        }
        else ;
        preString = currString;
    }

    if (bl)
        cout<<"there is no repeat!"<<endl;
    
    return 0;
}