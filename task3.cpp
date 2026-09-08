#include <iostream>
#include <iomanip>

using namespace std;
class student
{
public:
    int marks, rollno;

    void disp()
    {
        cout << " ROLL NUMBER:" << rollno << "\n";
        cout << " MARKS:" << marks << "\n";
    }
};
int main()
{
    student s1, s2;

    // enter initial data for student 1
    s1.marks = 65;
    s1.rollno = 111111;

    // student 2 
     s2.marks = 76;
    s2.rollno = 222222;

    //display before modifying data
    s1.disp();
    s2.disp();

    // modifying values
    s2.marks=87;
    s1.rollno=999999;

    //display after modifying data
    s1.disp();
    s2.disp();

    cin.get();
    return 0;
}