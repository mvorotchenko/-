#include<iostream>
#include <string>
#include <map>

using namespace std;

size_t find_first_of_space(string s){
    for (size_t i = 0; i < s.size(); ++i) {
        if (isspace(s[i])) {
            return i;
        }
    }
    return s.size();
}

void f(string& s){
    map<char, int> words;
    for (int i = 0; i < s.size(); ++i) {
        words[s[0]] += 1;
        size_t first = find_first_of_space(s);
        if (first < s.size())
            s = s.substr(first+1, s.size()-1);
        i = first+1;
    }
    for (const auto& word : words) {
        if (word.first != ' ')
            cout << word.first << " with amount = " << word.second << endl;
    }
}

int main() {
    string s = "   a1  h1 abasds2       h2 yqweq1 ";
    f(s);
}

