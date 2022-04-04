#include<iostream>
using namespace std;
class Student {
    private :
        int rno;
    public :
        void enroll() {
            cout<<"\nI have to enroll any object.\n";
        }
        void payTutionFees(int fees) {
            cout<<"I have to pay tution fees "<<fees<<" ks.\n";
        }
};
class Instructor {
    private :
        int salary;
    public:
        void setSalary(int salary) {
            this->salary = salary;
        }
        void teach() {
            cout<<"\nI have to teach a subject.\n";
        }
        void displaySalary() {
            cout<<"\nI get salary "<<salary<<" ks.\n";
        }
};
class TeachingAssistant : public Student, public Instructor {
    //rno
    //student's action
    //salary
    //enroll()
    //payTutionFees()
    //setSalary()
    //displaySalary()
    public : 
        TeachingAssistant() {
            cout<<"\nI am a teaching assistant.\n";
        }
};
int main() {
    TeachingAssistant obj = TeachingAssistant();
    obj.enroll();
    obj.payTutionFees(50000);
    obj.setSalary(100000);
    obj.teach();
    obj.displaySalary();

    return 0;
}