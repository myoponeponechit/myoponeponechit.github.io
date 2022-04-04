#include<iostream>
using namespace std;
class Based {
    private:
        int x;
        int y;
    public :
        Based() {
            cout<<"\nBased's default constructor.\n";
        }
        Based(int a, int b) {
            cout<<"Based's argument constructor.\n";
            x = a;
            y = b;
        }
};
class Derived : public Based {
    private :
        int z;
    public :
        Derived() {
            cout<<"\nDerived's default constructor.\n";
        } 
        Derived(int a, int b, int c) : Based(a,b) {
            cout<<"Derived's argument constructor.\n";
            this->z = c;
        } // obj2 output => Based's argument constructor.   Derived's argument constructor.

        /*Derived(int a, int b, int c) {
            cout<<"Derived's argument constructor.\n";
            this->z = c;
        }*/ // obj2 output => Based's default constructor.  Derived's argument constructor.
};
int main() {
    Derived obj1 = Derived();// default constructor
    cout<<"\n--------------------------\n";
    Derived obj2 = Derived(100,200,300);// argument constructor
    return 0;
}