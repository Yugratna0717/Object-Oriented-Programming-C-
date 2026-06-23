/*
Create a class Musicians and a derived class
InsType to categorise musical instruments.
*/

#include <iostream>
using namespace std;
// Base class
class Musicians {
public:
void string() {
cout << "Veena, Guitar, Sitar" << endl;
}
void wind() {
cout << "Flute, Clarinet, Saxophone" << endl;
}
void percussion() {
cout << "Tabla, Mridangam, Drums" << endl;
}
};
// Derived class
class InsType : public Musicians {
public:
void show() {
int choice;
cout << "Choose Instrument Type:" << endl;
cout << "1. String Instruments" << endl;
cout << "2. Wind Instruments" << endl;
cout << "3. Percussion Instruments" << endl;
cout << "Enter your choice: ";
cin >> choice;
switch(choice) {
case 1:
cout << "String Instruments: ";
string();
break;
case 2:
cout << "Wind Instruments: ";
wind();
break;
case 3:
cout << "Percussion Instruments: ";
percussion();
break;
default:
cout << "Invalid choice!" << endl;
}
}
};
int main() {
InsType obj;
obj.show();
return 0;
}
