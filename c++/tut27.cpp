// FACTORIAL OF NUMBER
#include <iostream>
using namespace std;
int main(){

    int num, sum=1;
    cout << "Enter the numebr: ";
    cin >> num;

    for (int i = 1; i <= num; i++){
        sum = sum * i;
    }
    cout << "The factorail of " << num << " is " << sum;
}