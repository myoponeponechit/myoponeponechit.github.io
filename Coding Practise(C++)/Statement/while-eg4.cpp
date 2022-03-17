#include<iostream>
using namespace std;
int main(){
    int start_num,end_num;
    cout<<"Enter start number : ";
    cin>>start_num;
    cout<<"Enter end number : ";
    cin>>end_num;
    while(start_num <= end_num){
        if(start_num % 2){
            cout<<start_num<<" is odd number.";
            cout<<"\n";
        }
        start_num++;
    }
    /*int num = 1;
    while(num < 6){
        if(num % 2){
            cout<<num<<" is odd number.";
            cout<<"\n";
        }
        num++;
    }*/

    return 0;
}