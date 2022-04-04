#include<iostream>
using namespace std;
class Shoe{
    //data
    private : 
        int id;
        string name;
        string brand;
        string color;
        int price;
        string shoe_size;
    //constructor
    public : 
        Shoe(){
            id = price = 0;
            name = brand = color = shoe_size = "";
        }
        Shoe(int id,string name,string brand){// 3 arg constructor
            this->id = id;
            this->name = name;
            this->brand = brand;
        }
        Shoe(int id, string name, string brand, string color, string shoe_size, int price){// 6 arg constructor
            this->id = id;
            this->name = name;
            this->brand = brand;
            this->color = color;
            this->shoe_size = shoe_size;
            this->price = price;
        }
    //function
    void initData(int id, string name, string brand, string color, string shoeSize, int price){
        this->id = id;
        this->name = name;
        this->brand = brand;
        this->color = color;
        this->shoe_size = shoeSize;
        this->price = price;
    }
    void showData(){
        cout<<"\n";
        cout<<id<<"\t";
        cout<<name<<"\t";
        cout<<brand<<"\t";
        cout<<color<<"\t";
        cout<<shoe_size<<"\t";
        cout<<price<<" ks.";
    }
    void setPrice(int useerPrice){
        if(useerPrice < 1000){
            cout<<"\n"<<useerPrice<<" is invalid.";
            this->price = 1000;
        }
        else{
            this->price = useerPrice;
        }
    }
};
int main(){
    //create object
    Shoe shoe1 = Shoe();//use 0 arg constructor
    shoe1.initData(1111,"Hiking Book","Nike","Black","30",53000);
    Shoe shoe2 = Shoe(2222,"High Heel","Lily");// use 3 arg constructor
    Shoe shoe3 = Shoe(3333,"Leather Sneaker","Adidas","Purple","42",63000);// use 6 arg constructor
    //Show Data
    cout<<" Code \t Shoe Name \t Brand \t Color \t Size \t Price \n";
    cout<<"-----------------------------------------------------";
    shoe1.showData();
    shoe2.showData();
    shoe3.showData();
   // shoe1.setPrice(-90000);
    //shoe1.showData();
    shoe1.setPrice(90000);
    shoe1.showData();
    return 0;
}