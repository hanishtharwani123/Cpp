// BUILDING A BETTER CALCULATOR 
#include <iostream>
using namespace std;
int main(){

    int num1, num2;
    char op;

    cout << "Enter the num1: ";
    cin >> num1;

    cout << "Enter the operator: ";
    cin >> op;

    cout << "Enter the num2: ";
    cin >> num2;
    
    int result;
    if(op == '+'){
        result = num1 + num2;
    }
    else if(op == '-'){
        result = num1 - num2;
    }
    else if(op == '*'){
        result = num1 * num2;
    }
    else if(op = '/'){
        result = num1 / num2;
    }
    else{
        cout << "Invalid operator" << endl;
    }

    cout << result;
    return 0;
}