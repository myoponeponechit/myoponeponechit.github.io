#include<iostream>
using namespace std;
int main(){
    int price,discount,afterDis;
    cout<<"Enter Product Price : ";
    cin>>price;
    cout<<"Discount Value : ";
    cin>>discount;
    afterDis=price-price*discount/100;
    cout<<"\nAfter discount,price : "<<afterDis;

    return 0;
}