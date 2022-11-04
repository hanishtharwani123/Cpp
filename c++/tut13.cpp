// SWITCH CASE STATEMENT is also similar to IF AND ELSE STATEMENT but in this method you have to use BREAK STATEMENT
#include <iostream>
using namespace std;
int main(){
    // SWITCH CASE

    int age;
    cout << "Enter the age:  ";
    cin >> age;

    switch (age)
    {
    case 18:
        cout << "You are 18 years old" << endl;
        break;
    
    case 15:
        cout << "You are 15 years old" << endl;
        break;

    case 12:
        cout << "You are 12 years old" << endl;
        break;

    default:
        cout << "You are not 18, 15, 12 years old" << endl;
        break;
    }
    return 0;
}
