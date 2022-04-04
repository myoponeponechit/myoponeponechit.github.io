#include<iostream>
#include<string>
using namespace std;
int main(){
    const string uName = "mmit";
    const string uPassword = "admin123";
    string userName,password;
    cout<<"---------Login Form-----------";
    cout<<"\nEnter user name : ";
    cin>>userName;
    cout<<"Enter password : ";
    cin>>password;
    if(uName == userName && uPassword == password){
        cout<<"\nLogin success!";
    }
    else if(uName == userName){
        cout<<"\nPassword incorrect!!!";
    }
    else if(uPassword == password){
        cout<<"\nUser name is incorrect!!!";
    }
    else{
        cout<<"\nUser name and password are incorrect!!!";
    }
    cout<<"\n------------------------------";
    return 0;
}