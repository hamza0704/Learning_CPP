#include <iostream>
using namespace std;


class temp{
    private:
        double celsius;
    private:
        temp(double c){
            celsius=c;
            cout<<"temp obj created"<<endl;
        }

    double tof(){
        return (celsius*9/5)+32;
    }
    temp(){
        cout<<"temp obj destroyed"<<endl;

    }
};
int main() {
    double c;
    cout<<"enter temp to celsius: ";
    cin>>c;
    temp tampp(c);
    cout<<c<<"c in fehrenheit "<<tampp.tof()<<"F"<<endl;
    return 0;

    
}



