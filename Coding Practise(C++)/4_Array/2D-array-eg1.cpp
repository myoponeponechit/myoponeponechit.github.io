#include<iostream>
using namespace std;
int main(){

    int num1[2][3] = {{10,54,30},{90,79,89}};

    int num2[2][3] = {{10,54,30}};

    int num3[2][3] = {{10,53},{90,79}};

    int num4[2][3] = {{10,53},{90}};

    int num5[][3] = {{10,53},{90},{100,50,60}};

    int num6[2][3] = {};

    int num7[][3] = {10,50,90,70};//number of column must be assinged [row][col]<---must be assinged

    //int num8[2][] = {};

    cout<<"num1[1][2] = "<<num1[1][2];

    return 0;
}