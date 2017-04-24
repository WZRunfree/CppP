// fill fill_n back_inserter copy replace replace_copy
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> vec(10, 0);
    fill(vec.begin(), vec.end(), 1);
    // for (auto begin = vec.begin(); begin != vec.end(); begin++) cout << *begin << " ";
    // cout << endl;
    // 第二个参数 n 需要检查是否超出容器范围
    fill_n(vec.begin() + 2, 5, 9);
    // for (auto begin = vec.begin(); begin != vec.end(); begin++) cout << *begin << " ";
    // cout << endl;
    // back_inserter
    fill_n(back_inserter(vec), 5, 5);
    // for (auto begin = vec.begin(); begin != vec.end(); begin++) cout << *begin << " ";
    // cout << endl;
    // copy
    vector<int> vec1(vec.size());
    auto ret = copy(vec.cbegin(), vec.cend(), vec1.begin());

    replace(vec1.begin(), vec1.end(), 9, 39);
    for (auto begin = vec1.begin(); begin != vec1.end(); begin++) cout << *begin << " ";
    cout << endl;
    vector<int> vec2;
    replace_copy(vec1.cbegin() + 2, vec1.cend(), back_inserter(vec2), 5, 50);
    for (auto begin = vec2.begin(); begin != vec2.end(); begin++) cout << *begin << " ";
    cout << endl;

    return 0;
}