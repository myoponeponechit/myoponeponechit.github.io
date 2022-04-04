#include<iostream>
using namespace std;
class Account{
    //data
    private : 
        string account_holder;
        string account_no;
        int balance;
    //function
    public :
        Account(){// 0 arg constructor

        }
        // 3 arg constructor
        Account(string name,string accNo,int bal){//"Yuki","099734892",500000
            this->account_holder = name;
            this->account_no = accNo;
            this->balance = bal;
        } 
        void initData(string name,string no,int bal){
            this->account_holder = name;
            this->account_no = no;
            this->balance = bal;
        }
        void showData(){
            cout<<"\n___________Account Info__________\n";
            cout<<"Account Holder : "<<this->account_holder;
            cout<<"\nAccount No : "<<this->account_no;
            cout<<"\nBalance : "<<this->balance<<" ks.";
        }
};
int main(){
    Account acc1 = Account();// using 0 arg constructor(default constructor)
    acc1.initData("Park Chanyeol","12345678",1200000);
    acc1.showData();

    Account acc2 = Account("Yuki","099734892",500000);// with 3 arg constructor
    acc2.showData();

    Account acc3 = Account("JamesJirayut","646534176",60000000);
    acc3.showData();
    return 0;
}