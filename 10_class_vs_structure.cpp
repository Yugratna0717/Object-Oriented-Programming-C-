/*
 Demonstrate class vs structure by implementing
similar functionalities in both.
*/

#include <iostream>
using namespace std;
// Using CLASS
class StudentClass {
private:
int id;
string name;
public:
void setData(int i, string n) {
id = i;
name = n;
}
void display() {
cout << "Class -> ID: " << id << ", Name: "
<< name << endl;
}
};
// Using STRUCT
struct StudentStruct {
int id;
string name;
void setData(int i, string n) {
id = i;
name = n;
}
void display() {
<< name << endl;
cout << "Struct -> ID: " << id << ", Name: "
}
};
int main() {
// Class object
StudentClass s1;
s1.setData(1, "Alice");
s1.display();
// Struct object
StudentStruct s2;
s2.setData(2, "Bob");
s2.display();
return 0;
}
