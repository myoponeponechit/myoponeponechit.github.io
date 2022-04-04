#include<iostream>
using namespace std;
int main(){

    int bar_code[4];
    string items[4];
    float price[4];
    //User Input
    for(int i = 0; i < 4; i++){
        cout<<"Enter barcode : ";
        cin>>bar_code[i];
        cout<<"Enter item name : ";
        cin>>items[i];
        cout<<"Enter price : ";
        cin>>price[i];
        cout<<"\n";
    }
    //Display All Items
    cout<<"___________All Items___________\n";
    cout<<"Code\tItem Name\tPrice\n\n";
    for(int i = 0; i < 4; i++){
        cout<<bar_code[i]<<"\t"<<items[i]<<"\t\t"<<price[i]<<"\n";
    }
    //Display item name grather than price 300
    cout<<"\n________Items(Price > 300)________\n\n";
    for(int i = 0; i < 4; i++){
        if(price[i] > 300){
            cout<<items[i]<<"\t"<<price[i];
            cout<<"\n";
        }
    }
    //Search item with bar code
    int barCode;
    int result = -1;
    cout<<"\n\nEnter barcode to search : ";
    cin>>barCode;
    for(int i = 0; i < 4; i++){
        if(barCode == bar_code[i]){
            cout<<"Barcode : "<<bar_code[i];
            cout<<"\nItem Name : "<<items[i];
            cout<<"\nPrice : "<<price[i];
            result += i;
        }
    }
    if(result == -1){
        cout<<"\nThis bar code \'"<<barCode<<"\' does not exist!";
    }
    return 0;
    
}