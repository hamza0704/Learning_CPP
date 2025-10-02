#include <iostream>
using namespace std;
class Animal{
public:
    string name;
    void setName(string n){
        name = n;
    }
};
class Dog : public Animal{
    public:
        void display(){
            cout<<"gadha: "<<name<<endl;
        }
};
int main(){
    Dog d;
    d.setName("Shreshth");
    d.display();
    return 0;
}   