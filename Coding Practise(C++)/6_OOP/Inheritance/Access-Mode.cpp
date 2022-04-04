#include<iostream>
using namespace std;
class Based {
    private :
        int x = 9;
    protected :
        int y = 20;
    public :
        int z = 22;
};
class PublicDrived : public Based {
    //protected : int y = 20;
    //public : int z = 22;
    public :
        void display() {
            cout<<"y = "<<y;
            cout<<"\nz = "<<z;
        }
};
class ProtectedDrived: protected Based {
    //protected: int y = 20;
    //protected: int z = 22;
    public:
        void display() {
            cout<<"\ny = "<<y;
            cout<<"\nz = "<<z;
        }
};
class PrivateDrived: private Based {
    //private: int y = 20;
    //private: int z = 22;
    public:
        void display() {
            cout<<"\ny = "<<y;
            cout<<"\nz = "<<z;
        }
};
int main() {
    PublicDrived obj1;
    obj1.display();

    //cout<<"\ny = "<<obj1.y;
    cout<<"\nz = "<<obj1.z;
    cout<<"\n-------------------------\n";
    ProtectedDrived obj2;
    obj2.display();
   /* cout<<"\ny = "<<obj2.y;//protected
    cout<<"\nz = "<<obj2.z;//protected
    */
    cout<<"\n-------------------------\n";
    PrivateDrived obj3;
    obj3.display();
    /*cout<<"\ny = "<<obj3.y;//private
    cout<<"\nz = "<<obj3.z;//private*/
    
    return 0;
}