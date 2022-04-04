#include<iostream>
using namespace std;
string brands[5];
int myIndex = 0;
void addBrand(string brand){
    brands[myIndex] = brand;
    myIndex++;
}
void showData(){
    cout<<"\n___________Brand List___________\n";
    for(int i = 0; i < 5; i++){
        cout<<brands[i]<<"\n";
    }
}
int main(){

    //user input
    addBrand("Samsung");
    addBrand("iPhone");
    addBrand("Vivo");
    addBrand("Mi");
    addBrand("Oppo");
    showData();
    return 0;
}