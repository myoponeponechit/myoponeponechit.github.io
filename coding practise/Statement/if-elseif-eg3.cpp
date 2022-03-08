#include<iostream>
using namespace std;
int main(){
    float bmi;
    cout<<"Enter your bmi value : ";
    cin>>bmi; // 32
    if(bmi<18.5){ //32 < 18.5
        cout<<"Underweight";
    }
    else if(bmi>=18.5 && bmi<=24.9){ //32 >= 18.5 && 32 <= 24.9
        cout<<"Normalweight";
    }
    else if(bmi>=25 && bmi<=29.9){ //32>=25 && 32 <= 29.9
        cout<<"Overweight";
    }
    else if(bmi>=30){ //32 >= 30   ---->true
        cout<<"Obesity";
    }

    return 0;
}