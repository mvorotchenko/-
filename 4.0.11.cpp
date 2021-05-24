#include <iostream>
#include <string>
struct person_info
{
    std::string sname;
    std::string address;
    std::string city;
    person_info(std::string s, std::string a, std::string c);
    person_info() : sname("None"), address("None"), city("None") {};
};

person_info::person_info(std::string s, std::string a, std::string c)
{
    sname = s;
    address = a;
    city = c;
}

void search_two_per_address(person_info* arr, int N)
{
    short flag = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[j].address == arr[i].address && i != j)
            {
                flag++;
                std::cout << "Name: " << arr[i].sname << "\nCity: " << arr[i].city << "\nAddress: " << arr[i].address;
                std::cout << "\n\nName: " << arr[j].sname << "\nCity: " << arr[j].city << "\nAddress: " << arr[j].address;
                break;
            }
        }
        if (flag > 0)
            break;
    }
    if (flag == 0)
        std::cout << "No identical address\n";
}

int main()
{
    int N = 5;
    person_info* C = new person_info[N];
    C[0] = person_info("1","1","1");
    C[1] = person_info("2", "2", "2");
    C[2] = person_info("3", "3", "3");
    C[3] = person_info("4", "1", "4");
    C[4] = person_info("5", "5", "5");
    search_two_per_address(C, N);
    delete[] C;
}