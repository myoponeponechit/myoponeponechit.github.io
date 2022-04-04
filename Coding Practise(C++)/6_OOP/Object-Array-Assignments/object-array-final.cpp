#include<iostream>
using namespace std;
class Employee {
    private :
        int empNo;
        string name;
        int salary;
    public :
        Employee() {

        }
        Employee(int no, string name, int salary) {
            this->empNo = no;
            this->name = name;
            this->salary = salary;
        }
        int getEmpNo() {
            return this->empNo;
        }
        void setEmpNo(int empNo) {
            this->empNo = empNo;
        }
        string getName() {
            return this->name;
        }
        void setName(string name) {
            this->name = name;
        }
        int getSalary() {
            return this->salary;
        }
        void setSalary(int salary) {
            this->salary = salary;
        }
        void showData() {
            cout<<"\nEmployee No : "<<getEmpNo();
            cout<<"\nName : "<<getName();
            cout<<"\nSalary : "<<getSalary();
        }
        void promoteSalary(int promSalaryValue) {
            this->salary = this->salary + promSalaryValue;
        }
};
int main() {
    //create emp array
    Employee employees[4];
    //initialze data
    int no;
    string name;
    int salary;
    cout<<"\n_____________Test 1_______________\n";
    for(int i = 0; i < 4; i++) {
        cout<<"\nEnter data for Employee "<<i + 1<<" : ";
        cout<<"\nEmpNo : ";
        cin>>no;
        cin.ignore();
        cout<<"\nName : ";
        getline(cin,name);
        cout<<"\nSalary : ";
        cin>>salary;

        employees[i].setEmpNo(no);
        employees[i].setName(name);
        employees[i].setSalary(salary);
    }
    //display salary and name
    cout<<"\n_____________Test 2_______________\n";
    for(int i = 0; i < 4; i++) {
        Employee emp = employees[i];
        cout<<emp.getName()<<" => "<<emp.getSalary();
        cout<<"\n";
    }
    //promote salary
    cout<<"\n_____________Test 3_______________\n";
    cout<<"Enter promotion amount : ";
    cin>>salary;
    for(int i = 0; i < 4; i++) {
        employees[i].promoteSalary(salary);
    }
    //after promote salary
    for(int i = 0; i < 4; i++) {
        cout<<employees[i].getEmpNo()<<" => "<<employees[i].getSalary()<<" ks.";
        cout<<"\n";
    }
    //daiplay all data
    cout<<"\n_____________Test 4_______________\n";
    cout<<"\n----------All Employees------------\n";
    for(int i = 0; i < 4; i++) {
        employees[i].showData();
        //cout<<"\n";
    }
    return 0;
}