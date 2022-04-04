#include<iostream>
using namespace std;
class SaleRecord{
    //data
    public : 
        string itemName;
        double unitPrice;
        int saleQty;

    //function/method
    void addSaleRecord(string name, double price, int qty){
        itemName = name;
        unitPrice = price;
        saleQty = qty;
    }
    double getSubTotal(){
        return unitPrice * saleQty;
    }
    void displayInfo(){
        cout<<"\n";
        cout<<itemName<<"\t";
        cout<<unitPrice<<"\t";
        cout<<saleQty<<"\t";
        cout<<getSubTotal()<<" ks.\n";
    }
};
int main(){
    SaleRecord rec1,rec2,rec3;
    //add
    rec1.addSaleRecord("Soju",6900,4);
    rec2.addSaleRecord("Burger",4200,1);
    rec3.addSaleRecord("Coffee",2500,2);
    //display
    cout<<"__________All SaleRecord__________\n\n";
    cout<<"Name\tPrice\tQty\tSub Total\n";
    cout<<"-----------------------------------";
    rec1.displayInfo();
    rec2.displayInfo();
    rec3.displayInfo();
    return 0;
}