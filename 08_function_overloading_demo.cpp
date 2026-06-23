/*
Demonstrate function overloading using different
parameter types and numbers.
*/

#include <iostream>
using namespace std;
class MathOperations {
public:
// Function with 2 integers
int add(int a, int b) {
return a + b;
}
// Function with 3 integers (different number of
parameters)
int add(int a, int b, int c) {
return a + b + c;
}
// Function with 2 doubles (different parameter
types)
double add(double a, double b) {
return a + b;
}
// Function with int and double (mixed types)
double add(int a, double b) {
return a + b;
}
};
int main() {
MathOperations obj;
cout << "Sum of 2 integers: " << obj.add(2, 3) <<
endl;
cout << "Sum of 3 integers: " << obj.add(1, 2, 3)
<< endl;
<< endl;
2.5) << endl;
cout << "Sum of 2 doubles: " << obj.add(2.5, 3.7)
cout << "Sum of int and double: " << obj.add(5,
return 0;
}
