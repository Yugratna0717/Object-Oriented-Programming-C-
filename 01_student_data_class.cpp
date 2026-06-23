/*
QUESTION 1:
Create a class with private data members and public
member functions to get and display student data.
*/

#include <iostream>
using namespace std;
class Student {
   private:
   int rollNo;
   string name;
   float marks;
   public:
// Function to get student data
   void getData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Marks: ";
        cin >> marks;
  }
// Function to display student data
  void displayData() {
       cout << "\nStudent Details:\n";
       cout << "Roll Number: " << rollNo << endl;
       cout << "Name: " << name << endl;
       cout << "Marks: " << marks << endl;
 }
};
int main() {
    Student s;
    s.getData();
    s.displayData();
    return 0;
}
