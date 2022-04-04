#include<iostream>
using namespace std;
int findLargestNumber(int num1, int num2, int num3){
    int larg_num = num1;
    if(larg_num < num2)
        larg_num = num2;
    
    if(larg_num < num3)
        larg_num = num3;
    
    return larg_num;
}
int findSmallestNumber(int num1, int num2, int num3){
    int small_num = num1;
    if(small_num > num2)
        small_num = num2;
    
    if(small_num > num3)
        small_num = num3;
    
    return small_num;
}
void checkLogin(string username, string password){     //username = 'mmit', password = '123'
    /*if(username == "mmit" && password == "123"){
        cout<<"\nLogin success.........";
    }
    else{
        cout<<"\nuser name and password do not match.\n";
    }*/
    if(username == "mmit" && password == "admin123"){
        cout<<"\nLogin success.........";
    }
    else if(username == "mmit"){
        cout<<"\nPassword does not match.";
    }
    else if(password == "admin123"){
        cout<<"\nUser name does not match.";
    }
    else if(!(username == "mmit" && password == "admin123")){
        cout<<"\nuser name and password do not match.";
    }

}
int main(){
    int a,b,c;
    string name,pwd;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    cout<<"\nLargest number is "<<findLargestNumber(a,b,c);
    cout<<"\nSmallest number is "<<findSmallestNumber(a,b,c);
    userInput :
    cout<<"\nEnter user name : ";
    cin>>name;
    cout<<"Enter password : ";
    cin>>pwd;
    checkLogin(name,pwd);
    int input;
    cout<<"\nIf you want to try again, press '1' : ";
    cin>>input;
    if(input == 1){
        cin.ignore();
        goto userInput;
    }
    return 0;
}