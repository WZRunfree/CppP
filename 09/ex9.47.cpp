#include <iostream>
#include <string>
#include <cctype>   //toupper()
using namespace std;

void find_char(string s, string chars)
{
    cout<<"find char of "<<chars<<" in "<<s<<endl;
    string::size_type pos = 0;
    while ( (pos = s.find_first_of(chars, pos)) != string::npos) {
        cout<<"pos:"<<pos<<",char:"<<s[pos]<<endl;
        pos++;
    }
}
void find_nochar(string s, string chars)
{
    cout<<"find char of "<<chars<<" not in "<<s<<endl;
    string::size_type pos = 0;
    while ( (pos = s.find_first_not_of(chars, pos)) != string::npos) {
        cout<<"pos:"<<pos<<",char:"<<s[pos]<<endl;
        pos++;
    }
}
int main()
{
    string s = "ja3i3b4fh41hj";
    string numbers("0123456789");
    string abc("abcdefghijklmnopqrstuvwxyz");
    abc.append(abc);
    for(int i=26; i<abc.size(); i++) {
        abc[i] = toupper(abc[i]);   //需要头文件 <cctype>
    }
    
    //find_first_of
    find_char(s, numbers);
    cout<<"find char"<<endl;
    cout<<abc<<endl;
    find_char(s, abc);
    
    //find_first_not_of
    find_nochar(s, numbers);
    cout<<"find no char"<<endl;
    cout<<abc<<endl;
    find_nochar(s, abc);
    
    return 0;
}
