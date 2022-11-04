// HOW TO CHECK PRIME NUMBER
#include <iostream>
using namespace std;
int main(){

    int num, i;
    cout << "Enter the number: ";
    cin >> num;

    for (int i = 2 ; i<num; i++){
        if (num % i == 0){
            cout << "Number is not prime" << endl;
            break;
        
        }
        
    }
    if (i == num){
        cout << "Number is prime" << endl; 
    }
}