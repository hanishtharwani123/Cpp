// ARMSTRONG NUMBER
#include <iostream>
using namespace std;
int main(){

    int n, r, sum = 0, t;
    cout << "Enter the number: ";
    cin >> n;

    t = n;
    while (n > 0){
        r = n % 10;
        sum = sum * r * r * r;
        n = n / 10;
    }
    if (t == sum){
        cout << "Armstrong number" << endl;
    }
    else{
        cout << "Not Armstrong number" << endl;
    }
}