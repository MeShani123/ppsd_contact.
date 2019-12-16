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

void setname(string name){
        this->name=name;
}
string getname(){
        return name;
}
void setemail(string Email){
        this->Email=Email;
}
string getemail(){
        return Email;
}
void setnumber(string number){
        this->number= number;
}
string getnumber(){
        return number;
}
void  setcity(string city){
        this->city=city;
}
string getcity(){
        return city;
}
};
int main()
{
 char x,z;
        int index;
        string num;
        string namee;
        string emai;
        string cit;
        Contact obj1;
        Contacts obj2;

    return 0;
}
