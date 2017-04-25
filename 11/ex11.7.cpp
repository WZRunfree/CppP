#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
void addFamily(map<string, vector<string>> &families, const string family)
{
    if (families.find(family) == families.end())
        families[family] = vector<string> ();
}
void addChild(map<string, vector<string>> &families, const string family, const string name)
{
    if (families.find(family) == families.end())
        families[family] = vector<string> ();
    
    families[family].push_back(name);
}
int main(void)
{
    map<string, vector<string>> families;
    addFamily(families, "张");
    addChild(families, "张", "水");
    addChild(families, "王", "老");

    for (auto f : families) {
        cout << f.first << ": ";
        for (auto c : f.second) {
            cout << c << ";";
        }
        cout << endl;
    }
    return 0;
}