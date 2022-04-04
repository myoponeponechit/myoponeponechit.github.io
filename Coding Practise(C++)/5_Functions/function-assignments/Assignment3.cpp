#include<iostream>
using namespace std;
int barCode[5];
string name[5];
int price[5];
void initializeItemData(){
    for(int i = 0; i < 5; i++){
        cout<<"Enter barcode : ";
        cin>>barCode[i];
        cout<<"\nEnter item name : ";
        cin>>name[i];
        cout<<"\nEnter price : ";
        cin>>price[i];
    }
}
void displayItemData(){
    cout<<"Barcode \t Name \t Price \n";
    for(int i = 0; i < 5; i++){
        cout<<barCode[i]<<"\t"<<name[i]<<"\t"<<price[i]<<"\n";
    }
}
int searchItemByCode(int bar_code){
    int pos = -1;
    for(int i = 0; i < 5; i++){
        if(bar_code == barCode[i]){
            pos = i;
            break;
        }
    }
    return pos;
}
int main(){
    start :
    int input;
    cout<<"1. Initialize Item Data\n";
    cout<<"2. Display Item Data\n";
    cout<<"3. Search Item With Barcode\n";
    cout<<"Choose 1, 2 or 3 : ";
    cin>>input;
    if(input == 1){
        initializeItemData();
    }
    else if(input == 2){
        displayItemData();
    }
    else if(input == 3){
        int barcode;
        cout<<"\nEnter barcode to search : ";
        cin>>barcode;
        int result = searchItemByCode(barcode);
        if(result == -1){
            cout<<"\nNo item witn barcod '"<<barcode<<"' !";
        }
        else{
            cout<<"\nBarcode : "<<barCode[result];
            cout<<"\nItem name : "<<name[result];
            cout<<"\nPrice : "<<price[result];
        }
    }
    int confirm;
    cout<<"\nIf you want to continue, press 1 : ";
    cin>>confirm;
    if(confirm == 1){
        goto start;
    }
    return 0;
}