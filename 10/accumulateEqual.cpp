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
    vector<int> vec1(vec.size(), 1);
    cout << equal(vec.cbegin(), vec.cend(), vec1.begin()) << endl;

    return 0;
}