// CHECKING NUMBER IS EVEN OR ODD
#include <iostream>
using namespace std;
int main()
{

    // BY USING IF AND ELSE 
    int num;
    cout << "Enter the numebr: ";
    cin >> num;

    if (num % 2 == 0){
        cout << num << " is a even number" << endl;
    }
    else{
        cout << num << " is a odd number" << endl;
    }
    return 0;

}
