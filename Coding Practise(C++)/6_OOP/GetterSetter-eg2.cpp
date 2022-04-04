#include<iostream>
using namespace std;
class Product {
    private : 
        int barCode;
        string name;
    public : 
        Product() {

        }
        bool setBarCode(int code) {
            if (code >= 1000 && code <= 9999) {
                this->barCode = code;
                return true;
            }
            else {
                return false;
            }
        }
        int getBarCode() {
            return this->barCode;
        }
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return this->name;
    }
    void showData() {
        cout<<"\n_________Information__________\n";
        cout<<"Barcode : "<<getBarCode();
        cout<<"\nName : "<<getName();
    }
};
int main() {
    int pCode;
    string pName;
    Product prod = Product();

    cout<<"Enter barcode : ";
    cin>>pCode;//100
    bool result = prod.setBarCode(pCode);//result = false
    while(!result) {//!true = false
        cout<<"\nEnter valid barcode(1000 ~ 9999) : ";
        cin>>pCode;

        result = prod.setBarCode(pCode);//result = true
    }

    cout<<"Enter name : ";
    cin>>pName;
    prod.setName(pName);
    prod.showData();
    return 0;
}