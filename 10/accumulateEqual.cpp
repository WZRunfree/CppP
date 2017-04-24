#include <iostream>
#include <vector>
#include <numeric> //accumulate
using namespace std;
int main()
{
    vector<int> vec = {2, 1, 4, 6, 10, 8};
    // accumulate
    cout << accumulate(vec.begin(), vec.end(), 0) << endl;
    // equal
    // 要求第三个参数，即第二个容器的迭代器后序列 至少等于 前面表示范围的大小，否则访问超出容器，出现未定义错误！
    // 操作两个容器迭代器的大多数泛型算法都有此要求
    vector<int> vec1(vec.size(), 1);
    cout << equal(vec.cbegin(), vec.cend(), vec1.begin()) << endl;

    return 0;
}