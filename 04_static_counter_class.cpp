/*
QUESTION 4:
Implement static data members and static member
functions with a counter class.
*/

#include <iostream>
using namespace std;
class Counter {
private:
static int count; // static data member
public:
// Constructor increments count
Counter() {
count++;
}
// Static member function to display count
static void showCount() {
cout << "Number of objects created: " << count << endl;
}
};
// Definition of static data member
int Counter::count = 0;
int main() {
Counter c1;
Counter::showCount();
Counter c2, c3;
Counter::showCount();
Counter c4;
Counter::showCount();
return 0;
}
