#include <iostream>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double salary;

public:
    // Parameterized constructor
    Employee(int empId, string empName, double empSalary) {
        id = empId;
        name = empName;
        salary = empSalary;
    }

    // Function to display employee details
    void display() {
        cout << "ID: " << id
             << ", Name: " << name
             << ", Salary: Rs. " << salary << endl;
    }
};

int main() {
    // Array of Employee objects, initialized using constructors
    Employee emp[3] = {
        Employee(101, "Aman", 35000),
        Employee(102, "Bhavna", 40000),
        Employee(103, "Chetan", 45000)
    };

    cout << "Employee Details:" << endl;

    // Display details of each employee
    for (int i = 0; i < 3; i++) {
        emp[i].display();
    }

    return 0;
}
