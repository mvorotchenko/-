#include <iostream>
#include <fstream>
#include <string>
#include <map>
int main()
{
    std::ifstream file("Text.txt");
    std::map <std::string, int> Mymap;
    std::string word;
    while (file >> word)
        Mymap[word]++;
    std::map <std::string, int>::iterator cur;

    for (cur = Mymap.begin(); cur != Mymap.end(); cur++)
        std::cout << (*cur).first << ": " << (*cur).second << "\n";
    file.close();
}
