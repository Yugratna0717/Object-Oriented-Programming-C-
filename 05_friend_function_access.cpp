/*
Create a class that demonstrates the use of friend
functions to access private data.
*/

#include <iostream>
using namespace std;
class Box {
private:
int length;
public:
// Constructor
Box(int l) {
length = l;
}
// Declare friend function
friend void displayLength(Box b);
};
// Friend function definition
void displayLength(Box b) {
// Accessing private member directly
cout << "Length of the box: " << b.length <<
endl;
}
int main() {
Box b1(10);
// Calling friend function
displayLength(b1);
return 0;
}
