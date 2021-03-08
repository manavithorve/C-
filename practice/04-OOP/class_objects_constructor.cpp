#include <iostream>
using namespace std;

class Student
{
    //scope: private (default scope in cpp)
private:
    int rollNo;
    string name;
    int totalMarks;

    //scope: public
public:
    //constructor
    Student() {}                              //default constructor
    Student(int roll, string name, int marks) //Constructor overloading. (parameterized constructor)
    {
        rollNo = roll;
        this->name = name;
        totalMarks = marks;
    }

    void acceptData()
    {
        cin >> rollNo >> name >> totalMarks;
    }

    void displayData()
    {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main()
{
    Student s1;
    cout << "\nEnter Roll, Name, Total marks: ";
    s1.acceptData();

    Student s2(10, "John", 79);
    s1.displayData();
    s2.displayData();

    return 0;
}