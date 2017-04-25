#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //partition
#include <functional> //bind
using namespace std;
// bool isLong(const string &str)
// {
//     if (str.size() < 5) return false;
//     return true;
// }
bool isLong(const string &str, string::size_type sz)
{
    if(str.size() < sz) return false;
    return true;
}
int main()
{
    vector<string> words = {"the", "quick", "over", "jumps", "red", "slow", "the", "turtle"};
    // partition
    // partition(words.begin(), words.end(), isLong);
    string::size_type sz = 5;
    // lambda: 捕获所处区块的有效变量
    // auto par = partition(words.begin(), words.end(), [sz](string &str){return str.size() >= sz;});
    // bind: 接受一个可调用对象，生成一个新的可调用对象
    auto f = bind(isLong, std::placeholders::_1, sz);
    // auto par = partition(words.begin(), words.end(), bind(isLong, std::placeholders::_1, sz));
    auto par = partition(words.begin(), words.end(), f);
    for (auto begin = words.begin(); begin != words.end(); begin++) cout << *begin << " ";
    cout << endl;
    cout << *par << endl;
    
    return 0;
}