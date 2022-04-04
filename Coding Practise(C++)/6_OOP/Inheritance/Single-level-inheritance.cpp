#include<iostream>
using namespace std;
class Person {
    protected : 
        string name;
        string nrcno;
    public :
        void intiData(string name, string nrc) { //name = "Jone", nrc = "12/sakhana(n)123456" // name = "Cheery", nrc = "5/Kalahta(n)654322"
            this->name = name;
            this->nrcno = nrc;
        }
        void showData() { //name = "Jone", nrc = "12/sakhana(n)123456" // obj2 - name = "Cheery", nrc = "5/Kalahta(n)654322"
            cout<<"\nName : "<<name;
            cout<<"\nNrc No : "<<nrcno;
        }
};
class Student : public Person {
    //name
    //nrc
    //intiData()
    //showData()
    private :
        int rno;
    public :
        Student() {

        }
    //rno = 5, na = "Jone", nrc = "12/sakhana(n)123456"
        Student(int rno, string na, string nrc) {
            this->rno = rno;
            intiData(na,nrc);
        }
    public :
        void showData() {
            cout<<"\nRoll No : "<<rno;
            Person::showData();// showData() of parent class Person
        }
        void attend() {
            cout<<"\nI am attanding 5th year.\n";
        }
};
class Programmer : public Person {
    //name
    //nrc
    //intiData()
    //showData()
    private :
        string skillsets;
    public :
    // skills = "HTML, CSS, Javascript, MySql, C++, Python"
        void setSkillsets(string skills) {
            this->skillsets = skills;
        }
        void viewSkillsets() {
            cout<<"\nHello, I am programmer. I am skillful in these languages - \n";
            cout<<skillsets;
        }
};
int main() {
    cout<<"\n--------------Student ------------------\n";
    Student obj = Student(5, "Jone", "12/sakhana(n)123456");
    obj.showData();
    obj.attend();
    cout<<"\n--------------Programmer ------------------\n";
    Programmer obj2 = Programmer();
    obj2.intiData("Cheery", "5/Kalahta(n)654322");
    obj2.setSkillsets("HTML, CSS, Javascript, MySql, C++, Python");
    obj2.viewSkillsets();
    obj2.showData();
    
    return 0;
}