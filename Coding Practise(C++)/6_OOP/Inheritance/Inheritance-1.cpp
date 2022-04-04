#include<iostream>
using namespace std;
class Animal {
    protected : 
        string name;
        int leg;
    public :
        void setName(string name) {
            this->name = name;
        } 
        string getName() {
            return this->name;
        }
        void setLeg(int leg) {
            this->leg = leg;
        } 
        int getLeg() {
            return this->leg;
        }
        void eat() {
            cout<<"\nI can eat.\n";
        }
        void sleep() {
            cout<<"\nI can sleep.\n";
        }
};
class Bird : public Animal {
    //protected striing name
    //protected string leg
    //getter/setter
    //eat()
    //sleep()
    private :
        int wings;
    public :
        int getWings() {
            return this->wings;
        }
        void initData(string name, int leg, int wings) {
            this->wings = wings;
            this->name = name;
            this->leg = leg;
        }
        void fly() {
            cout<<"\nI can fly.\n";
        }
};
class Elephant : public Animal {
    //protected striing name
    //protected string leg
    //getter/setter
    //eat()
    //sleep()
    private :
        int tail;
    public :
        void setTail(int tail) {
            this->tail = tail;
        }
        void swim() {
            cout<<"\nI can swim.\n";
        }
        void showInfo() {
            cout<<"\n___________Elephant___________\n";
            cout<<"Name : "<<getName();
            cout<<"\nNo of Leg : "<<Animal :: getLeg();
            cout<<"\nNo of tail : "<<this->tail;
        }
};
int main() {
    
    Bird obj1 = Bird();
    obj1.initData("Parrot",2,2);
    cout<<"\n___________Bird Info___________\n";
    cout<<"Name : "<<obj1.getName();
    cout<<"\nNo of Leg : "<<obj1.getLeg();
    cout<<"\nNo of Wings : "<<obj1.getWings();

    obj1.fly();
    obj1.eat();
    obj1.sleep();

    Elephant obj2 = Elephant();
    obj2.setName("Thandar");
    obj2.setLeg(4);
    obj2.setTail(1);
    
    obj2.showInfo();
    obj2.swim();
    obj2.eat();
    obj2.sleep();

    return 0;
}