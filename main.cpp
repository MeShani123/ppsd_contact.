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

void file(){
        ofstream zeeshan;
        // Contact oobject;
        string num;
        string nam,ema,cit;
        zeeshan.open("shani.txt",ios::app);
        for(int x=0; x<50; x++) {
                if(lists[x].getnumber()=="\0") {
                        break;
                }
                // if(lists[x].getnumber())
                nam=lists[x].getname();
                num=lists[x].getnumber();
                cit=lists[x].getcity();
                ema=lists[x].getemail();
                zeeshan <<  nam << endl;
                zeeshan <<   num << endl;
                zeeshan <<  cit << endl;
                zeeshan <<  ema << endl;

        }// End of for loop
        zeeshan.close();
}    // End of file class
void load(){
        Contact zee;
        string x;
        string nam,ema,cit,num;
        ifstream zeeshan;
        zeeshan.open("shani.txt");
        while(zeeshan.eof()==0) {
                getline(zeeshan,x);
                zee.setname(x);
                getline(zeeshan,x);
                zee.setnumber(x);
                getline(zeeshan,x);
                zee.setcity(x);
                getline(zeeshan,x);
                zee.setemail(x);
                for(int x=0; x<50; x++) {
                        if(lists[x].getnumber()=="\0") {
                                lists[x]=zee;
                                break;
                        } // End of if statment
                } // End of for loop
        } // End of while loop
}    // End of load function



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

    do {

                cout << "Press A to add contact :" << endl;
                cout << "Press R to remove contact :" << endl;
                cout << "Press S to search contact :" << endl;
                cout << "Press D to display all contacts :" << endl;
                cout << "Press C to see how many contacts exist :" << endl;
                cout << "Press I to insert contact without replacing :" << endl;
                cout << "Press F to save contacts to file :" << endl;
                cout << "Press L to load contacts from file :" << endl;
                cin >> x;

switch (x) {
                case 'A':
                        cout << "Enter name of person :"<< endl;
                        cin >> namee;
                        cout << "Enter number of person :" << endl;
                        cin >> num;
                        cout << "Enter city of person :" << endl;
                        cin >> cit;
                        cout << "Enter email of person :" << endl;
                        cin >> emai;
                        obj1.setname(namee);
                        obj1.setnumber(num);
                        obj1.setcity(cit);
                        obj1.setemail(emai);
                        obj2.add(obj1);
                        break;
case 'R':
                        cout << "Enter Index of contact you want to remove :"<< endl;
                        cin >> index;
                        obj1.setname("\0");
                        obj1.setnumber("\0");
                        obj1.setcity("\0");
                        obj1.setemail("\0");
                        obj2.remove(index,obj1);
                        break;
 case 'S':
                        cout << "Enter name of contact you want to search :" << endl;
                        cin >> namee;
                        obj2.search(namee);
                        break;

                case 'D':
                        obj2.display();
                        break;
case 'C':
                        obj2.counter();
                        break;

                case 'I':
                        cout << "Enter name of person :"<< endl;
                        cin >> namee;
                        cout << "Enter number of person :" << endl;
                        cin >> num;
                        cout << "Enter city of person :" << endl;
                        cin >> cit;
                        cout << "Enter email of person :" << endl;
                        cin >> emai;
                        cout << "Enter index at which you want to insert contact :" << endl;
                        cin >> index;
                        obj1.setname(namee);
                        obj1.setnumber(num);
                        obj1.setcity(cit);
                        obj1.setemail(emai);
                        obj2.insert(index,obj1);
                        break;

                case 'F':
                        obj2.file();
                        break;

                case 'L':
                        obj2.load();
                        break;

                }
                cout << " Press Y/y to continue :"<< endl;
                cin >>z;
        } while(z=='Y' || z== 'y');

    return 0;
} // End of main function
