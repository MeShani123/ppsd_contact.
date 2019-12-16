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

    void setname(string name)
    {
        this->name=name;
    }
    string getname()
    {
        return name;
    }
    void setemail(string Email)
    {
        this->Email=Email;
    }
    string getemail()
    {
        return Email;
    }
    void setnumber(string number)
    {
        this->number= number;
    }
    string getnumber()
    {
        return number;
    }
    void  setcity(string city)
    {
        this->city=city;
    }
    string getcity()
    {
        return city;
    }
	void display(){
        cout << "Name of person is "<< name << endl;
        cout << "nameeNumber of person is "<< number << endl;
        cout << "Email of person is " << Email << endl;
        cout << "Number of person is "<< number << endl;
} // End of display function

};
class Contacts
{
public:
    Contact lists[50];

    void add(Contact obj1)
    {
        for (int x=0; x<50; x++)
        {
            if(lists[x].getnumber()=="\0")
            {
                lists[x]=obj1;
                cout << " Contact have been created at "<< x << " index"<< endl;
                break;
            } // End of if statement
        } // End of for loop
    }    // End of add function

    void search(string namee)
    {
        for(int x=0; x<50; x++)
        {
            if(lists[x].getname()==namee)
            {
                cout << "Name of person is :" << lists[x].getname() << endl;
                cout << "Number of person is :" << lists[x].getnumber() << endl;
                cout << "Email of person is :" << lists[x].getemail() << endl;
                cout << "City of person is :" << lists[x].getcity() << endl;
                break;
            } // End of if statement
            else
            {
                cout << "Contact does not exist :"<< endl;
            }
        }// End of for loop
    }    // End of search function
    void display(){
        for(int x=0; x<50; x++) {
                if(lists[x].getname()!="\0") {
                        cout << "Name of person is :" << lists[x].getname() << endl;
                        cout << "Number of person is :" << lists[x].getnumber() << endl;
                        cout << "Email of person is :" << lists[x].getemail() << endl;
                        cout << "City of person is :" << lists[x].getcity() << endl;
                        cout << endl << endl;
                } // End of if statement
        }// End of for loop
}   // End of display function
	void counter() {
		int count = 0;
		for (int x = 0; x < 50; x++) {
			if (lists[x].getnumber() != "\0") {
				count++;
			}
		} // End of for loop
		cout << "Number of contacts in program are :" << count << endl;
	}   // End of counter function
	void remove(int x, Contact obj1) {
		lists[x] = obj1;
	}    // End of delete function

void insert(int index, Contact obj1){
        string num;
        string nam,cit,ema;
        Contact object;
        if(lists[index].getnumber()!="\0") {
                num=lists[index].getnumber();
                nam=lists[index].getname();
                cit=lists[index].getcity();
                ema=lists[index].getemail();
                object.setname(nam);
                object.setnumber(num);
                object.setcity(cit);
                object.setemail(ema);
                for(int x=0; x<50; x++) {
                        if(lists[x].getnumber()=="\0") {
                                lists[x]=object;
                                lists[index]=obj1;
                                break;
                        } // End of if statement
                } // End of for loop
        } // End of if statement
        else {
                lists[index]=obj1;
        }
}    // End of insert function


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
