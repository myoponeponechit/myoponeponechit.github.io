#include<iostream>
using namespace std;
int main(){

    float prices[2][3] = {
        {1200.9,600.2,800},
        {1000,4900,3000}
    };

    for(int c = 0; c < 3; c++){

        float max_price = prices[0][c];
        for(int r = 0; r < 2;r++){
            if(max_price < prices[r][c]){
                max_price = prices[r][c];
            }
        }
        cout<<"\nMaximum price of "<<c<<" column : "<<max_price;
    }
    return 0;
}