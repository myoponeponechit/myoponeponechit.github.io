#include<iostream>
using namespace std;
class Student {
    //data
    private : 
        int rno;
        string name;
        string course;
    //constructors
    public : 
        Student() {

        }
        Student(int std_rno, string std_name, string std_course) {
            /*this->rno = std_rno;
            this->name = std_name;
            this->course = std_course;*/
            setRno(std_rno);
            setName(std_name);
            setCourse(std_course);
        }
        //getter/setter
        int getRno() {
            return this->rno;
        }
        void setRno(int rno) {
            this->rno = rno;
        }
        string getName() {
            if(name == "") {
                return "Name is empty!!";
            }
            else {
                return this->name;
            }
        }
        void setName(string name) {
            this->name = name;
        }
        string getCourse() {
            if(course == "") {
                return "Course is empty!!";
            }
            else {
                return this->course;
            }
        }
        void setCourse(string course) {
            this->course = course;
        }
        //function
        
}
};
int main() {
    //initialze data
    Student students[2];
    int studentRno;
    string studentName;
    string studentCourse;
    for(int i = 0; i < 2; i++) {
        cout<<"Enter data for student "<<i + 1;
        cout<<"\nEnter roll no : ";
        cin>>studentRno;
        cin.ignore();
        cout<<"Enter name : ";
        getline(cin,studentName);
        cout<<"Enter course : ";
        getline(cin,studentCourse);
        cout<<"\n";

        students[i].setRno(studentRno);
        students[i].setName(studentName);
        students[i].setCourse(studentCourse);
    }
    //display all
    cout<<"\n______________All Students______________\n";
    for(int i = 0; i < 2; i++) {
        cout<<"Roll No : "<<students[i].getRno();
        cout<<"\nName : "<<students[i].getName();
        cout<<"\nCourse : "<<students[i].getCourse();
        cout<<"\n\n";
    }
    //search with rno
    int input;
    cout<<"\nEnter roll number to search : ";
    cin>>input;
    
    return 0;
}