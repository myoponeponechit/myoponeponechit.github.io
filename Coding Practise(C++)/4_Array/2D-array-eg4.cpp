#include<iostream>
using namespace std;
int main(){
    //declare
        int numbers[2][3];
    //user input
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3;j++){
            cout<<"Enter a number : ";
            cin>>numbers[i][j];
        }
    }
    //display and calculate total and count
    cout<<"__________All Numbers____________\n\n";
    int total = 0;
    int count = 0;
    for(int i = 0; i < 2; i++){//row
        for(int j = 0; j < 3;j++){//column
            cout<<numbers[i][j]<<"\t";
            total = total + numbers[i][j];
            count++;
        }
        cout<<"\n";
    }

    //display total and count
    cout<<"Sum : "<< total;
    cout<<"\nNo: of elements : "<<count;

    return 0;
}