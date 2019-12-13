////// Contact Management System

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Contact
{
    string name;
    string number;
    string Email;
    string city;
public:
    Contact()
    {
        name="\0";
        number="\0";
        Email="\0";
        city="\0";
    }///Non Parameterized Constructor End
    Contact(string name, string Email, string number, string city)
    {
        this->name=name;
        this->Email=Email;
        this->number=number;
        this->city=city;
    }///Parameterized Constructor End


};
int main()
{

    return 0;
}
