#include<iostream>
using namespace std;	


//Encapsulation Example 1
/*class Company
{
    private:
        int salary;

    public:
        void setSalary(int fulltime, int overtime)
        {
            salary = fulltime + overtime;
        }
        int getSalary()
        {
            return salary;
        }
        
};

int main()
{
    Company obj;
    obj.setSalary(30000,6000);
    cout<<"total salary is : "<<endl;
    cout<<obj.getSalary();
    return 0;
}*/

//Example 2
class Ball
{
    private:
    float area;

    public:
    void setArea(int radius)
    {
       area =  3.14*radius*radius;
    }
    float getArea()
    {
        return area;
    }

};
int main()
{
    Ball obj;
    obj.setArea(10);
    cout<<"the area of ball is : "<<endl;	
    cout<<obj.getArea();
    return 0;
}