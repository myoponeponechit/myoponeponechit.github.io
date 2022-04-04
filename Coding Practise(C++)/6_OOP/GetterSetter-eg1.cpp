#include<iostream>
using namespace std;
class Product {
    //data
    private : 
        string name;
        int barCode;
        float price;
    //constructors
    public : 
        Product() {

        }
        Product(int code, string name, float price) {
            setBarCode(code);//this->barCode = code;
            setName(name);//this->name = name;
            setPrice(price);//this->price = price;
        }
    //getter/setter
    void setBarCode(int code) {
        if(code >= 1000 && code <= 9999){
            this->barCode = code;
        }
        else{
            this->barCode = 0;
            cout<<"\nIncorrect barcode number.";
        }
    }
    int getBarCode() {
        return barCode;
    }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        if(name == "") {
            return "Name is empty!!";
        }
        else {
            return this->name;
        }
    }
    void setPrice(float pPrice) {
        if(pPrice < 100) {
            this->price = 0;
            cout<<"\nPrice must be at least 100ks.\n";
        }
        else {
            this->price = pPrice;
        }
    }
    float getPrice() {
        return this->price;
    }
    //function
    void showData() {
        cout<<"\n______Information__________\n";
        cout<<"Barcode : "<<getBarCode();
        cout<<"\nName : "<<getName();
        cout<<"\nPrice : "<<getPrice()<<" ks.";
    }
};
int main() {
    int pCode;
    string pName;
    float pPrice;

    //data assignad with getter/setter
    Product prod1 = Product();

    cout<<"Enter barcode : ";
    cin>>pCode;

    prod1.setBarCode(pCode);

    cout<<"\nEnter name : ";
    cin>>pName;

    prod1.setName(pName);

    cout<<"\nEnter Price : ";
    cin>>pPrice;

    prod1.setPrice(pPrice);

    prod1.showData();

    //data assigned with 3 arg constructors
    Product prod2 = Product(1002,"",4000);

    prod2.showData();
    return 0;
}