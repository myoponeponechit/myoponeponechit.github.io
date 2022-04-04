#include<iostream>
using namespace std;
class Employee {
    private : 
        int empNo;
        string rank;
        string department;
        int salary;
    public : 
        /*Employee() {

        }
        Employee(int empNo, string rank, string department, int salary) {
            this->empNo = empNo;
            this->rank = rank;
            this->department = department;
            this->salary = salary;
        }*/
        void initData(int empNo, string rank, string department, int salary) {
            this->empNo = empNo;
            this->rank = rank;
            this->department = department;
            this->salary = salary;
        }
        void showData() {
            cout<<"\nEmployee No : "<<this->empNo;
            cout<<"\nRank : "<<this->rank;
            cout<<"\nDepartment : "<<this->department;
            cout<<"\nSalary : "<<this->salary;
        }
};
int main() {
    //initialze data
    Employee employees[5];
    int empno;
    string emprank;
    string empdepartment;
    int empsalary;
    for(int i = 0; i < 5; i++) {
        cout<<"\n\nEnter data for employee "<<i+1;
        cout<<"\n-------------------------";
        cout<<"\nEnter employee no : ";
        cin>>empno;
        cin.ignore();
        cout<<"\nEnter rank : ";
        getline(cin,emprank);
        cout<<"\nEnter department : ";
        getline(cin,empdepartment);
        cout<<"\nEnter salary : ";
        cin>>empsalary;

        employees[i].initData(empno,emprank,empdepartment,empsalary);
    }
    //display all
    cout<<"\n____________All Employees_____________\n";
    for(int i = 0; i < 5; i++) {
        employees[i].showData();
        cout<<"\n";
    }
    return 0;
}