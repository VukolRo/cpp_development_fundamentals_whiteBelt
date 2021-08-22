#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

struct Person
{
    string name;
    string surname;
    int age;
};

int main()  {
    vector<Person> staff;
    staff.push_back({"Ivan", "Ivanov", 25});
    staff.push_back({"Petr", "Petrov", 32});

    cout << staff[0].name << "\n";
    return 0;
}