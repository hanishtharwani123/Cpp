// CONVERTING DEGREE CELCIUS TO FAHRENHEIT
#include <iostream>
using namespace std;
int main(){
    float C, F;
    cout << "Enter temperature in degree celsius: ";
    cin >> C;

    F = (C * 9/5) + 32;
    cout << "Tepmerature in fahrenheit: " << F;
    return 0;
}