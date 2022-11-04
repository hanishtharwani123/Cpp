// SUM OF N NATURAL NUMBER
#include <iostream>
using namespace std;
int main(){

    int num, sum=0;
    cout << "Enter the numebr: ";
    cin >> num;

    for (int i = 1; i <= num; i++){
        sum = sum + i;
    }
    cout << "Sum of natural number is " << sum;
}