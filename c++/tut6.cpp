// GETTING INPUT BY USER
#include <iostream>
using namespace std;
int main(){
    string greet, name, state, nation;

    cout << "Enter the greet: ";
    getline(cin, greet);

    cout << "Enter the name: ";
    getline(cin, name);

    cout << "Enter the sate: ";
    getline(cin , state);

    cout << "Enter the nation: ";
    getline(cin, nation);


    cout << greet << " guys how are you " << endl;
    cout << "My name is " << name << endl;
    cout << "i am from udaipur " << state << endl;
    cout << "i am going in another " << nation << endl;
    return 0;
}