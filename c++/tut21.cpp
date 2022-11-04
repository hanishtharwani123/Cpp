// HOW TO CHECK FIBONACCI SEQUENCE
#include <iostream>
using namespace std;
int main(){

    // FIBONACCI SEQUENCE = 0 1 1 2 3 5....

    int num;
    cout << "Enter the number: ";
    cin >> num;

    int num1 = 0;
    int num2 = 1;
    int num3;

    cout << num1 << " " << num2;

    for (int i = 1; i <= num; i++){
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        cout << " " << num3;
    }




}