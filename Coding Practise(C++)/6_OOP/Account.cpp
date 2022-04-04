#include<iostream>
using namespace std;
class Account{
    //data
    public : 
        string account_holder;
        string account_no;
        int balance;
    //function/method
    void createAccount(string accNo, string acc_name, int initAmt = 1000){
         account_holder = acc_name;
         account_no = accNo;
         balance = initAmt;
    }
    void showData(){
        cout<<"\n__________Current Info___________\n";
        cout<<"\nAccount Holder : "<<account_holder;
        cout<<"\nAccount No : "<<account_no;
        cout<<"\nCurrent Balance : "<<balance<<" ks.\n";
    }
    void deposit(int amount){
        balance = balance + amount;
    }
    bool withdraw(int amount){
        if(amount <= balance){
            balance = balance - amount;
            return true;
        }
        else{//not enough
            return false;
        }

    }
};
int main(){
    Account acc1 = Account();
    //creat account for acc1
    acc1.createAccount("123456","PCY");
    acc1.showData();

    //deposit 900000ks to acc1
    cout<<"\nDeposit Amount : 900000 ks.";
    acc1.deposit(900000);

    cout<<"\nAfter deposit, Current Balance : "<<acc1.balance<<" ks.\n";

    //withdraw 1000000ks
    cout<<"\n___________Withdraw(1000000ks)___________\n";
    bool result = acc1.withdraw(1000000);
    if(result){
        cout<<"\nWithdraw Success!\n";
        cout<<"Current Balance : "<<acc1.balance<<" ks.\n";
    }
    else{
        cout<<"\nSorry, Not enough balance!\n";
        cout<<"Current Balance : "<<acc1.balance<<" ks.\n";
    }
    //withdraw 500000ks
    cout<<"\n___________Withdraw(500000ks)___________\n";
    result = acc1.withdraw(500000);
    if(result){
        cout<<"\nWithdraw Success!\n";
        cout<<"Current Balance : "<<acc1.balance<<" ks.\n";
    }
    else{
        cout<<"\nSorry, Not enough balance!\n";
        cout<<"Current Balance : "<<acc1.balance<<" ks.\n";
    }
    //Account acc2, acc3;
    return 0;
}