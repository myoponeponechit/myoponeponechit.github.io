#include<iostream>
using namespace std;
class Person {
    private :
        string name;
    public :
        void getData() {
            cout<<"\nName : ";
            getline(cin,name);
        }
        void display() {
            cout<<"\nName : "<<name;
        }
};
class Employee : public Person {
    //getData()
    //display()
    private:
        string company;
        int salary;
    public :
        void getData() {
            Person::getData();
            cout<<"\nCompany Name : ";
            getline(cin,company);
            cout<<"\nSalary : ";
            cin>>salary;
            cin.ignore();
        }
        void display() {
            Person::display();
            cout<<"\nCompany Name : "<<company;
            cout<<"\nSalary : "<<salary;
        }
};
class Programmer : public Employee {
    //getData()
    //display()
    private : 
        string skillsets;
    public :
        void getData() {
            Employee::getData();
            cout<<"\nEnter skillsets : ";
            getline(cin,skillsets);
        }
        void display() {
            Employee::display();
            cout<<"\nSkillsets : "<<skillsets;
        }
};
int main() {
    Programmer obj1;
    obj1.getData();
    obj1.display();
    
    return 0;
}