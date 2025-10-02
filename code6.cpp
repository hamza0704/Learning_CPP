/*#include <iostream>
using namespace std;
inline int sqr (int x)
{
int y;
y = x * x;
return y;
}
int main()
{
int a = 3, b;
b = sqr(a); 
cout << b;
return 0;
}
#include <iostream> 
using namespace std;
inline int Max(int x, int y) 
{
return (x > y)? x : y;
}
int main( )
{
cout << "Max (20,10): " << Max(20,10) << endl;
cout << "Max (0,200): " << Max(0,200) << endl;
cout << "Max (100,1010): " << Max(100,1010) << endl;
return 0;
}*/
#include<iostream> 
using namespace std;

/*int main()
{
int x = 10;
int &ref = x; 
ref = 20;
cout << "x = " << x << endl ;
x = 30; 
cout << "ref = " << ref << endl ;
return 0;
}*/

/*void swap (int& first, int& second)
{
int temp = first;
first = second;
second = temp;
}
int main()
{
int a = 2, b = 3;
swap( a, b );
cout << a << " " << b;
return 0;
}*/
int main()
{
    int i =10;
    int*p=&i;
    int**pt=&p;
    int***ptr=&pt;
    cout<<"i="<<i<<"\t"<<"p="<<p<<"\t"<<"pt="<<pt<<"\t"<<"ptr="<<ptr<<"\n";
    int a =5;
    int&S=a;
    int&S0=S;
    int&S1=S0;
    cout<<"a="<<a<<"\t"<<"S="<<S<<"\t"<<"S0="<<S0<<"\t"<<"S1="<<S1<<"\n";
}