#include<iostream>
using namespace std;
int main(){
    int rno;
    string name;
    string city;
    int age;
    float mark;
    char grade;

    cout<<"------User Input-------\n\n";
    cout<<"Enter rno : ";
    cin>>rno;//rno=2
    cin.ignore();
    cout<<"Enter name : ";
    //cin>>name;name=Aung
    getline(cin,name);
    cout<<"Enter city : ";
    getline(cin,city);
    cout<<"Enter marks : ";
    cin>>mark;
    cout<<"Enter grade : ";
    cin>>grade;

    cout<<"-----------Your Profile--------\n";

    cout<<"Roll No : "<<rno;
    cout<<"\nName : "<<name;
    cout<<"\nCity : "<<city;
    cout<<"\nMarks : "<<mark;
    cout<<"\nGrade : "<<grade;


    return 0;
}