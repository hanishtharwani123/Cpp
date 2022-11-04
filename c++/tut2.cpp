// VARIABLE = VARIABLE IS MEMORY LOCATION OR CONTAINER WHERE WE STORE A VALUE OF DATA TYPE
#include <iostream>
using namespace std;
int main(){
//  int           age =            12;
//[data type] [variable name] = [integer value]

// VARIABLE IS CASE SENSITIVE 
// VARIABLE NAME ALWAYS STARTS WITH CHAR NOT NUMBER
// VARIABLE NAME MUST BE MEANINGFULL
// WE CANNOT USE VARIABLE NAME AS RESERVE KEYWORD
    string name = "naman tharwani";
    string state = "rajasthan";
    int age = 18;
    string course = "Computer science";
    string greet = "Goodbye";

    cout << "Hello everyone my name is " << name << endl;
    cout << "I am frpm udaipur " << state << endl;
    cout << "i am " << age << " years old" << endl;
    cout << "I am pursuing btech " << course << " from vit university" << endl;
    cout << "Nice to meet you all " << greet << endl;
    return 0;
}