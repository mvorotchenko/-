#include <iostream>

int main(){
    std::string     str = "one, two, three, four, five";
    int count=0;
    for (int i = 0; i < str.size(); i++)
        if (str[i] == ',') count++;
    std::cout <<  count << std::endl;
    std::cout << str.find_first_of(',') << std::endl;
    std::cout << str.find_last_of(',') << std::endl;


}
