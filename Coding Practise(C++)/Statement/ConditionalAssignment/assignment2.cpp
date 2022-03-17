#include<iostream>
using namespace std;
int main(){
    int price,qty,totalPrice,afterDis;
    cout<<"Enter item price : ";
    cin>>price;
    cout<<"Enter item quantity : ";
    cin>>qty;
    totalPrice=price * qty;
    if(totalPrice>5000){
        afterDis = totalPrice - (totalPrice * 10/100);
        cout<<"Total Expense : "<<afterDis;
    }else{
        cout<<"Total Expense : "<<totalPrice;
    }
    
    return 0;
}