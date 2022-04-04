#include<iostream>
using namespace std;
int main(){

    int numbers[4] = {13,11,19,2};
    cout<<"__________Elememts in Array__________\n";
    for(int i = 0;i < 4;i++){
        cout<<numbers[i]<<"\t";
    }
    int largest = numbers[0];
    for(int j = 1;j < 4; j++){
        if(largest < numbers[j]){
            largest = numbers[j];
        }
    }
    cout<<"\n\nThe Largest Element is "<<largest;

    return 0;
}