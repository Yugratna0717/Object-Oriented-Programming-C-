/*
QUESTION 3:
Demonstrate constructor overloading with default,
parameterised, and copy constructors.
*/

#include <iostream>
using namespace std;
class Student {
      private:
      int rollNo;
      string name;
      public:
      // Default Constructor
      Student() {
         rollNo = 0;
         name = "Unknown";
         cout << "Default Constructor Called\n";
      }
     // Parameterised Constructor
     Student(int r, string n) {
         rollNo = r;
         name = n;
         cout << "Parameterised Constructor Called\n";
     }
     // Copy Constructor
    Student(const Student &s) {
        rollNo = s.rollNo;
        name = s.name;
        cout << "Copy Constructor Called\n";
    }
    // Display Function
    void display() {
         cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    // Default constructor
    Student s1;
    s1.display();
    // Parameterised constructor
    Student s2(101, "Rahul");
    s2.display();
    // Copy constructor
    Student s3 = s2;
    s3.display();
    return 0;
}
