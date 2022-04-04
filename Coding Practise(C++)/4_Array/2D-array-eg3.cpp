#include<iostream>
using namespace std;
int main(){

    //declare
    int number[2][3];
    //user input
    for(int i = 0; i < 2; i++){//outer loop for row
        for(int j = 0; j < 3;j++){//inner loop for column
            cout<<"Enter a number : ";
            cin>>number[i][j];
        }
    }
    //output
    for(int i = 0; i < 2; i++){//row
        for(int j = 0; j < 3;j++){//column
            cout<<number[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}