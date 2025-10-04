
/*#include<iostream>
using namespace std;
main()

    string name;
    cout<<"enter a name: ";
    cin>>name;

    do{
        cout<<name;
        break;
    }
    while(name!="Hamza");
    
}

    int num;
    cout<<"enter a number: ";
    cin>>num;
    cout<<"Multiplication table of: "<<num;
    for(int i=1; i<=10;++i)
    {
        cout<<num<<"*"<<i<<"="<<num*i<<endl;
    }
}
{
    int num;
    cout<<"enter a number: ";
    cin>>num;
    if (num!=0)
    {
        cout<<"hamza"<<endl;
    }
    else
    {   cout<<"Gamcha";
    }
    
}
{   
    string signal;
    cout<<"enter signal value: ";
    cin>>signal;
    
    if(signal=="red")
    {
        cout<<"STOP";
    }
    else
    {
        cout<<"wait";
    }


    if(signal=="green")
    {
        cout<<"GO";
    }
}*/

/*
#include<iostream>
using namespace std;
main(){
    char value; int num1, num2;
    cout<<"enter first number: ";
    cin>>num1;

    cout<<"what do u want: ";
    cin>>value;

    cout<<"enter second number: ";
    cin>>num2;

    switch(value){
        case '+': cout<<"Addition: "<<num1+num2;
        break;
        case '-': cout<<"Subtraction: "<<num1-num2;
        break;
        case '*': cout<<"Multiplication: "<<num1*num2;
        break;
        case '/': cout<<"division: "<<num1/num2;
        break;}
}*/
//types of jumping stateement 1)goto 2) break 3) continue 4) return
/*
#include<iostream>
using namespace std;
int add(){
    int a=10,b=20;
    return a+b;
}
main(){
    cout<<add()<<endl;
    int num;
    for(num=1; num<=10;++num){
        if (num==5){
            break;
        }
        cout<<num<<endl;
    }
    cout<<"hi viewer...:)";
    out:
        cout<<"hello learner"<<endl;
}   */
//array is collection of same type of datatype and they are stored sequentially
//index of an array always start with 0
//for different values we had to assign different variable but the datatype was same it took a 
//lot of manwork and efforts 
/*#include<iostream>
using namespace std;
main(){
    int a[5];
    cout<<"Enter array elements: ";
    for(int i=0;i<5;++i)
    {
            cin>>a[i];
    }
    
    for(int i=4;i>=0;--i)
    {
        cout<<a[i]<<ends;
    }
}*/
//string header uses
/*#include<iostream>
#include<string.h>
using namespace std;
main(){
    char myName[20];//this size should be fixed, mutable 
    cout<<"enter your first name: ";

    string myAddress;//can be variable, immutable

}*/
//Function is a block of code which takes imput process it and provide an output as an result, it runs only
//when it calls.
//type1) user define function - add(),sum(). type2) strcpy(), strcmp() 
#include<iostream>
using namespace std;
void say()//defining the function
{
        cout<<"Hello learner!!: )";
}
main()
{
    say();//calling the function
}
//Recursive functions calls itself