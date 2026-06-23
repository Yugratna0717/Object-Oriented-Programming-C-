/*
 Overload the + and - binary operators using friend
functions in a Complex class.
  */

#include <iostream>
using namespace std;
class Complex {
private:
int real, imag;
public:
// Constructor
Complex(int r = 0, int i = 0) {
real = r;
imag = i;
}
// Friend function declarations
friend Complex operator+(Complex c1, Complex c2);
friend Complex operator-(Complex c1, Complex c2);
// Display function
void display() {
cout << real << " + " << imag << "i" << endl;
}
};
// Overloading + operator
Complex operator+(Complex c1, Complex c2) {
Complex temp;
temp.real = c1.real + c2.real;
temp.imag = c1.imag + c2.imag;
return temp;
}
// Overloading - operator
Complex operator-(Complex c1, Complex c2) {
Complex temp;
temp.real = c1.real - c2.real;
temp.imag = c1.imag - c2.imag;
return temp;
}
int main() {
Complex c1(3, 4), c2(1, 2);
Complex sum = c1 + c2;
Complex diff = c1 - c2;
cout << "Sum: ";
sum.display();
cout << "Difference: ";
diff.display();
return 0;
}
