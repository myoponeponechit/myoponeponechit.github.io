#include<iostream>
using namespace std;
int main(){

    float prices[2][3] = {
        {1200.9,340,600.2},
        {1100,4900,500.5}
    };


    float max_price = prices[0][0];

    for(int r = 0; r < 2; r++){
        for(int c = 0; c < 3; c++){
            if(max_price < prices[r][c]){
                max_price = prices[r][c];
            }
        }
    }
    cout<<"Maximum price is "<<max_price;
    return 0;
}