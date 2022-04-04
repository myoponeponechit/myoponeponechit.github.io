#include<iostream>
using namespace std;
void checkLogin(){
    string email,password;

    //user input
    userInput:
    cout<<"Enter E-mail : ";
    getline(cin,email);
    cout<<"Enter password : ";
    getline(cin,password);

    //verify
    if(email == "pcy@gmail.com" && password == "123"){
        cout<<"\nLogin success.........";
    }
    else{
        int input;
        cout<<"\nemail and password do not match.\n";
        cout<<"If you want to try again, press '1";
        cin>>input;
        if(input == 1){
            cin.ignore();
            goto userInput;
        }
    }
}
int main(){
    cout<<"______________Before calling function______________\n";
    checkLogin();
    cout<<"\n_____________After calling function______________\n";
    return 0;
}