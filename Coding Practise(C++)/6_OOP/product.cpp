#include<iostream>
using namespace std;
class Product{
    public : 
        int barCode;
    private : 
        string name;
        float price = 0.0;
    public : void showData(){
        cout<<"BarCode : "<<this->barCode;
        cout<<"\nName : "<<this->name;
        cout<<"\nPrice : "<<this->price<<" ks.";
    }
};
int main(){
    Product newProd = Product();//create object
    //Access data
    newProd.barCode = 10001;//ok(public)
    newProd.showData();//ok(public)
    //newProd.name = "Soju";//error(private)
    //newProd.price = 6400.0;
    return 0;
}