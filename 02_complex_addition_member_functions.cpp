/*
QUESTION 2:
Implement a class Complex to perform addition of
two complex numbers using member functions.
*/

#include <iostream>
using namespace std;
class Complex {
      private:
      int real, imag;
      public:
      // Function to input complex number
      void getData() {
           cout << "Enter real part: ";
           cin >> real;
           cout << "Enter imaginary part: ";
           cin >> imag;
      }
     // Function to add two complex numbers
      void add(Complex c1, Complex c2) {
           real = c1.real + c2.real;
           imag = c1.imag + c2.imag;
      }
      // Function to display complex number
      void display() {
           cout << real << " + " << imag << "i" << endl;
      }
};
int main() {
    Complex c1, c2, result;
    cout << "Enter first complex number:\n";
    c1.getData();
    cout << "\nEnter second complex number:\n";
    c2.getData();
    // Add c1 and c2, store in result
    result.add(c1, c2);
    cout << "\nSum of complex numbers: ";
    result.display();
    return 0;
}
