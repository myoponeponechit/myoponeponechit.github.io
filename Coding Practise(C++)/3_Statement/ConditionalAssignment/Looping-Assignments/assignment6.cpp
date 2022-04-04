#include<iostream>
using namespace std;
int main(){

    int num,type_num;
    int i = 0;
    int zero_count = 0;
    int pst_count = 0;
    int ngt_count = 0;

    cout<<"How many number you want to type : ";
    cin>>type_num;

    while(i < type_num){
        cout<<"Enter a number : ";
        cin>>num;
        i++;
        if(num == 0){
            zero_count++;
        }
        else if(num > 0){
            pst_count++;
        }
        else if(num < 0){
            ngt_count++;
        }
    }
    cout<<"______________________________";
    cout<<"\nNumbers of zero : "<<zero_count;
    cout<<"\nNumbers of positive number : "<<pst_count;
    cout<<"\nNumbers of negative number : "<<ngt_count;

    return 0;
}