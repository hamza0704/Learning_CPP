#include<iostream>
#include<string>
using namespace std;

class Teacher{
public:
    //properties
    Teacher(){
        cout<<"hi i am a constructor"<<endl;}
    string name;
    string dept;
    string subject;
    string changedept(string newdept)
    {
        dept = newdept;
        return dept;}//
    //setters
    void setsalary(double s)
    {
        salary = s;
    }
    //getters
    double getsalary()
    {
        return salary;
    }
private:
    double salary;
    
};
int main(){
    Teacher t1; 
    t1.name = "john";
    t1.dept = "CSE";
    t1.subject = "C++";
    t1.setsalary(50000.0);
    cout<<"Name: "<<t1.name<<endl;	
    cout<<"Department: "<<t1.dept<<endl;
    cout<<"Subject: "<<t1.subject<<endl;
    cout<<"Salary: "<<t1.getsalary()<<endl;}


