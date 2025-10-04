#include<iostream>
using namespace std;

//SINGLE INHERITANCE
/*
class Beverage
{
    public:
    void drinks()
    {
        cout<<"All drinks are available here"<<endl;
    }
};
class Coffee: public Beverage
{
    public:
    void mocha()
    {
        cout<<"Mocha tastes the best"<<endl;
    }
};

int main()
{
    Coffee c;
    c.drinks();
    c.mocha();
    return 0;
}*/

//MULTIPLE INHERITANCE
/*
#include<iostream>
using namespace std;
class party
{
    public:
    int meals;
    void food()
    {
        cout<<"enter number of meals ";
        cin>>meals;
    }
};
class Drink
{
    public:
    int drinks;
    void Liquior()
    {
        cout<<"enter the number of drinks ";
        cin>>drinks;
    }
};
class Bill : public party, public Drink
{
    int total_meals;
    int total_drinks;
    int total_bill;

    public:
    void total()
    {
        total_meals = meals*90;
        total_drinks = drinks*50;
        total_bill = total_meals + total_drinks;
        cout<<"total bill is : "<<total_bill<<endl;
    }

};
int main()
{
    Bill b;
    b.food();
    b.Liquior();
    b.total();
    return 0;
}*/
//MULTI LEVEL INHERITANCE
class chemistry
{
    public:
    int marks1;
    void chemistry_marks()
    {
        cout<<"enter chemistry marks ";
        cin>>marks1;
    }
};
class physics : public chemistry
{
    public:
    int marks2;
    void physics_marks()
    {
        cout<<"enter sccored marks in physics ";
        cin>>marks2;
    }
};
class maths : public physics
{
    public:
    int marks3;
    int total;
    void maths_marks()
    {
        cout<<"enter scored marks in maths ";
        cin>>marks3;
        total = marks1 + marks2 + marks3;
        total/3;
        cout<<"average marks are : "<<total/3<<endl;
    }
};
int main()
{
    maths m;
    m.chemistry_marks();
    m.physics_marks();
    m.maths_marks();
    return 0;
}