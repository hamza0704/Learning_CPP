#include <iostream>
using namespace std;

string processname(string name){
    return "Hello " + name;
}

int main() {
    string username;
    cout<<"enter your name: ";
    cin>>username;
    cout<<processname(username);
    return 0;
}
