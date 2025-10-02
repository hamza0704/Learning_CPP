#include <iostream>
using namespace std;

class Person{
    private:
        string name;
    public:
        void setname(string n){name = n;}
        string getname() { return name;}
        };

int main() {
    Person p;
    p.setname("rahul");
    cout<<p.getname();
    return 0;
   
}