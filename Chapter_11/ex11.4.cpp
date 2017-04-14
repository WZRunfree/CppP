#include <map>
using std::map;

#include <string>
using std::string;

#include <utility>
using std::pair;

#include <cstddef>
using std::size_t;

#include <cctype>
using std::tolower;

#include <iostream>
using std::cin; using std::cout; using std::endl;

string &transf(string &s)
{
    // 忽略大小写和标点
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = tolower(s[i]);
        else if (s[i] == '.' || s[i] == ',')
            s.erase(i, 1);
    }
    return s;
}

int main() 
{
    // count the number of times each word occurs in the input
    map<string, size_t> word_count; // empty map from string to size_t
    string word;
    while (cin >> word)
      ++word_count[transf(word)];

	for (map<string, size_t>::const_iterator w = word_count.begin();
			w != word_count.end(); ++w)
		cout <<  w->first << " occurs " << w->second << " times" << endl;

    // // get an iterator positioned on the first element
    // map<string, size_t>::const_iterator map_it = word_count.begin();
    // // compare the current iterator to the off-the-end iterator
    // while (map_it != word_count.end()) {
    //     // dereference the iterator to print the element key--value pairs
    //     cout << map_it->first << " occurs " 
    //          << map_it->second << " times" << endl;
    //     ++map_it;  // increment the iterator to denote the next element
    // }

	return 0;
}