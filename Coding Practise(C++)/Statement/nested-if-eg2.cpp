#include<iostream>
using namespace std;
int main(){
    //var
    float bmi;
    //user input
    cout<<"Enter your bmi values : ";
    cin>>bmi;
    //verify weight level
    if(bmi<18.5){
        cout<<"Underweight";
    }else{
        if(bmi>=18.5 && bmi<=24.9){
            cout<<"Normalweight";
        }
        else{
            if(bmi>=25 && bmi<=29.9){
                cout<<"Overweight";
            }
            else cout<<"Obesity";
        }
    }
    return 0;
}