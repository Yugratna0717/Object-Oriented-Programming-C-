/*
Write a program to overload a unary operator (e.g.,
increment operator) using member functions.
*/

#include <iostream>
using namespace std;
class Counter {
private:
int value;
public:
// Constructor
Counter(int v = 0) {
value = v;
}
// Overloading prefix increment operator (+
+value)
void operator++() {
value = value + 1;
}
// Display function
void display() {
cout << "Value: " << value << endl;
}
};
int main() {
Counter c1(5);
cout << "Before increment: ";
c1.display();
// Using overloaded operator
++c1;
cout << "After increment: ";
c1.display();
return 0;
}
