#include<iostream>
using namespace std;

void display(char ch = '*',int no = 3){
    for(int i = 0; i < no; i++){
        cout<<ch<<" ";
    }
    cout<<"\n";
}
void displayName(string name){
    cout<<"Name is "<<name<<"\n";
}

int main(){

    //displayName("Aung Aung");
    cout<<"\nNo parameter!";
    display();
    cout<<"\n1 parameter!";
    display('#');
    cout<<"\n2 parameter!";
    display('$',5);
    return 0;
}