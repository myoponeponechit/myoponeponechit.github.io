#include<iostream>
using namespace std;
int main(){
    string uname,upass;
    tryAgain : cout<<"\nEnter user name : ";
    cin>>uname;
    wrongPass : cout<<"\nEnter password : ";
    cin>>upass;
    

    /*if(uname != "mmit" || upass != "admin123")
    {
        goto tryAgain;
    }*/
    if(uname != "mmit")
    {
        goto tryAgain;
    }
    if(upass != "admin123")
    {
        goto wrongPass;
    }
    cout<<"\nLogin Success......";
    return 0;
}