#include<iostream>
using namespace std;
class Product{
    //data
    private : 
        string name;
        int barCode;
        float price;
    //constructor
    public :
        Product(){// 0 arg constructor

        }
        Product(int code,string name,float price){
            this->barCode = code;
            this->name = name;
            this->price = price;
        }
    //function
    void showData(){
        cout<<"\nCode : "<<this->barCode;
        cout<<"\nName : "<<this->name;
        cout<<"\nPrice : "<<this->price;
    }
};
int main(){
    string input_name;
    float input_price;
    int input_code;
    //user input
    cout<<"Enter barcode : ";
    cin>>input_code;//1001
    cout<<"\nEnter name : ";
    cin>>input_name;//Coffee
    cout<<"\nEnter price : ";
    cin>>input_price;//1200
    //create object
    //Product prod = Product(input_code,input_name,input_price);
    Product prod(input_code,input_name,input_price);// only in C++
    //display
    prod.showData();
    return 0;
}