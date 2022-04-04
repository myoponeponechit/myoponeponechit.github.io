#include<iostream>
using namespace std;

bool checkLogin(string mail,string pass){
   /* bool result;
    if(mail == "admin@gmail.com" && pass == "123"){
        result = true;
    else
        result = false;

    return result;
    }*/
    return(mail == "admin@gmail.com" && pass == "123") ? true : false;
}
int main(){
    string email,password;
    cout<<"Enter email : ";
    cin>>email;
    cout<<"Enter password : ";
    cin>>password;

    if(checkLogin(email,password))
        cout<<"Login Success!";
    else    
        cout<<"Invalid Login!";
    return 0;
}