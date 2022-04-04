#include<iostream>
using namespace std;
int main(){

    string brands[4] = {"Samsung","iPhone","Vivo","Oppo"};
    string search_brand;
    int result = -1;
    //bool result = false;

    cout<<"Enter brand name to search : ";
    cin>>search_brand;

    for(int i = 0; i < 4; i++){
        if(brands[i] == search_brand){
            //found
            cout<<"\nIt is exist.";
            result = i;
            break;
        }

    }
    if(result == -1){
        cout<<search_brand<<" does not exist!";
    }
    return 0;
}