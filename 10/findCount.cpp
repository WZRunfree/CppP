#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vec = {27, 210, 12, 47, 109, 83, 47};
    int ia[] = {27, 210, 12, 47, 109, 83, 47};
    vector<int>::const_iterator result;
    // find
    int val = 47;
    // vector<int> && int[]
    result = find(vec.begin(), vec.end(), val);
    if (result != vec.end()) cout << "vec[" << result - vec.begin() << "] = " << *result << endl;
    int* ret = find(begin(ia), end(ia), val);
    if (result != vec.end()) cout << "ia[" << ret - ia << "] = " << *ret << endl;
    ret = find(ia + 4, ia + 6, val);
    if (result != vec.end()) cout << "ia[" << ret - ia << "] = " << *ret << endl;
    // ex10.1 count
    cout << val << "出现" << count(vec.cbegin(), vec.cend(), val) << "次" << endl;
    // ex10.2
    string str = "a";
    list<string> svec = {"hello", "a", "simple", "lucky", "day", "a"};
    cout << str << "出现" << count(svec.cbegin(), svec.cend(), str) << "次" << endl;

    for (auto begin = svec.begin(); begin != svec.end(); begin++) cout << *begin << " ";
    cout << endl;

    return 0;
}