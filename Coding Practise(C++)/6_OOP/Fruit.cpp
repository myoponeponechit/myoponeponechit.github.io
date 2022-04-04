#include<iostream>
using namespace std;
class Fruit{
    //data
    public : 
        int price;
        string name;
    //function/method
    void setData(string na, int price){
        this->name = na;
        this->price = price;//declare နဲ. income input = same
    }
    void showData(){
        cout<<"Name : "<<name;
        cout<<"\nPrice : "<<price<<" ks.\n";
    }
};
int main(){
    //create object
    //way 1
    Fruit fruit1;
    //way 2
    Fruit fruit2 = Fruit();
    //accessing obj's data
    fruit1.name = "Orange";
    fruit1.price = 300;
    fruit1.showData();
    cout<<"\n       Another Fruit           \n";
    fruit2.setData("Banana",1200);
    fruit2.showData();
    return 0;
}