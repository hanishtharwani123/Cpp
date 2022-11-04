// FIND ALL PRIME FACTORS OF A NUMBER
#include <iostream>
using namespace std;
int main(){
    
    int n;
    int i, j;
    cout << "Enter the numebr: ";
    cin >> n;

    for (i = i; i < n; i++){
        for (j = 2; j < i; j++){
            if (i % j == 0){
                break;
            }
        }
        if (j == i){
            if (n % i == 0){
                cout << i;
            }
        }
    }

}