/*#include<iostream>
#include<typeinfo>
using namespace std;
void Myname()//Myname is a identifier
{
    int a=10;
    char b='A';
    string c="Hamza";
    float d = 45.43;
    cout<<sizeof(int)<<"Byte"<<endl;
    cout<<sizeof(char)<<"Byte"<<endl;
    cout<<sizeof(float)<<"Byte"<<endl;
    cout<<sizeof(double)<<"Byte"<<endl;
    cout<<sizeof(string)<<"Byte"<<endl; 
    cout<<a<<endl<<b<<endl<<c<<endl<<d;
    
    int x=10;
    double y=3.14;
    char z='A';
    cout<<typeid(x).name()<<endl;
    cout<<typeid(y).name()<<endl;
    cout<<typeid(z).name()<<endl;
    double a2=x;
    cout<<a2<<endl;
    int b2=y;
    cout<<b2<<endl;

{    int e;//local variable can be used only in the main function
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"the value of a: "<<a;
    string name ="hamza";//name is a identifier
    cout<<name<<endl;
    Myname();
    Myname();
}
#include<iostream>
using namespace std;
int main()
{
    int a { 5 };          // ok: types match
    unsigned int b { 6 }; // ok: compiler will convert int value 6 to unsigned int value 6
    long c { 7 };         // ok: compiler will convert int value 7 to long value 7

    return 0;
}*/
/*#include <iostream>
using namespace std;

class Rectangle {
private:
    int width, length;

public:

    void set(int w, int l) {
        width = w;
        length = l;
    }
    int area() {
        return width * length;
    }
};

int main() {
    Rectangle rect;
    rect.set(5, 8);
    cout << "Area of rectangle: " << rect.area() << endl;
    return 0;
}*/
/*#include<iostream>
class circle
{
    private:
    double radius;

    public:
    void store(double);
    double area(void);
    void display(void);
};
void circle::store(double r)
{ 
    radius=r;
}
double circle::area(void)
{
    return 3.14*radius*radius;
}
void circle::display(void)
{
    cout<<"r="<<radius<<endl;
}
int main(void){
    circle c;
    c.store(5.0);
    cout<<"the area of circle c is"<<c.area()<<endl;
}*/

/*#include<iostream>
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
/*#include<iostream>
using namespace std;
main()
{
    int a =10;
    int *p=&a;
    int **q=&p;
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    cout<<q<<endl;
    cout<<*q<<endl;
    cout<<**q<<endl;
    cout<<&q;
    int num = 10;
int* ptr = &num;  // ptr stores the address of num

std::cout << "Value of num: " << num << std::endl;
std::cout << "Address of num: " << &num << std::endl;
std::cout << "Pointer ptr stores: " << ptr << std::endl;
std::cout << "Value at ptr (dereferencing): " << *ptr << std::endl;*/


/*int main()
{
    int a = 4;
    int *ptr = &a;
    cout<<"the values of a is "<<(ptr)<<endl;

    float*p= new float(40.78);
    int *arr = new int[3];
    arr[0] = 10;
    return 0;
    float *p = float(40.78);

    cout << "The value at address pis " << *(p) << endl;

int *arr = new int[3];

arr[0] = 10;
arr[1] = 20;
arr[2] = 30;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is" << arr[2] << endl;
}*/


/*lude<iostream>
using namespace std;
main(){


struct Date {
int day;
int month;
int year;
} ;
struct StudentInfo{
int Id;
int age;
char Gender;
double CGA;
};
struct StudentGrade{
char Name[15];
char Course[9];
int Lab[5];
int Homework[3];
int Exam[2];
};
struct BankAccount{
char Name[15];
int AcountNo[10];
double balance;
Date Birthday;
};
struct StudentRecord{
char Name[15];
int Id;
char Dept[5];
char Gender;
};

}*/

/*#include <iostream>
#include <string>
using namespace std;

struct example
{
    // Data members of the structure
    int num;
    float num1;
    char ch1;
    string name;
    long int num2;

    // Constructor of the structure
    example()
    {
        cout << "I am the constructor of the structure\n";
    }

    // Member function of the structure
    void fun()
    {
        cout << "fun in structure definition called\n";
        cout << "num + num2 = " << (num + num2) << endl;
    }
};

int main()
{
    example obj1; // Creating an object of struct 'example'
    cout << "\n\n\n";
    obj1.fun();  // Calling the member function   
}*/
/*#include <iostream>
#include <cstring> // For strcpy()

using namespace std;

struct StudentRecord {
    char Name[22];
    int Id;
    char Dept[22];
    char gender;
};

int main() {
    StudentRecord Student1;

    // Assigning values to the structure members
    strcpy(Student1.Name, "Chan Tai Man");
    Student1.Id = 12345;
    strcpy(Student1.Dept, "COMP");
    Student1.gender = 'M';

    // Display gender with appropriate title
    cout << "The student is ";
    switch (Student1.gender) {
        case 'M':
            cout << "Mr. ";
            break;
        case 'F':
            cout << "Ms. ";
            break;
        default:
            cout << "Unknown ";
    }

    // Display student name
    cout << Student1.Name << endl;
} */
/*#include <iostream>
using namespace std;
class demo {
    int x;
public:
    demo(int a) {
        x = a;
    }
    friend void display(demo);
};

void display(demo d1) {
    cout << d1.x << endl;
}

int main() {
    demo d2(5);
    display(d2);
}*/
/*#include <iostream>
using namespace std;
class sample
{
        int a;
        int b;
    public:
        void setval()
        a=25;
        b=40;
        friend float mean(sample s);
};
float mean(sample s)
{
    return(s.a+s.b)/2.0;
}
void main()
{
    sample x;
    cout<<mean(x);
}*/
#include <iostream>
using namespace std;

class demo {
private:
    int x, y;

public:
    demo(int a, int b) {
        x = a;
        y = b;
    }

    friend class frnd;
};

class frnd {
public:
    void display(demo d1) {
        cout << "x is: " << d1.x << endl;
        cout << "y is: " << d1.y << endl;
    }
};

int main() {
    demo d2(10, 40);
    frnd f1;
    f1.display(d2);

}