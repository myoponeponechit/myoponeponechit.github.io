#include<iostream>
using namespace std;
int main(){

    float prices[2][3] = {
        {1200.9,600.2,800},
        {1000,4900,3000}
    };

    for(int r = 0; r < 2; r++){

        float max_price = prices[r][0];
        for(int c = 0; c < 3;c++){
            if(max_price < prices[r][c]){
                max_price = prices[r][c];
            }
        }
        cout<<"\nMaximum price of "<<r<<" row : "<<max_price;
    }

    return 0;
}