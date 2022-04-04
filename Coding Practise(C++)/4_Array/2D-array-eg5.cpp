#include<iostream>
using namespace std;
int main(){

    int row = 2;
    int col = 3;
    int num[row][col];

    //input
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<"Enter number num["<<i<<"]["<<j<<"]: ";
            cin>>num[i][j];
        }
        cout<<"\n";
    }
    //output
    cout<<"\n_____________All Elements______________\n";
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cout<<num[i][j]<<"\t";
        }
    }
    //calculate sum of each column
    //int total = 0;
    for(int c = 0; c < 3; c++){
        int total = 0;
        for(int r = 0; r < 2; r++){
            total = total + num[r][c];
        }
        cout<<"\nSum of "<<c<<" column : "<<total<<"\n";
        //total = 0;above for loop (int total = 0;)
    }

    return 0;
}