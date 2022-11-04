// WORKING WITH STRING
#include <iostream>
using namespace std;
int main(){
    // STRINGS = STRING IS A DATA TYPE WHER WE STORE COMPLEX OBJECT LIKE STATEMENT, MESSAGE AND STRING IS DECLARE BY QOTE("...")
    string story = "Hello everyone my name is hanish tharwani i am from class 8 i love dancing but i also love music";
    
    // STRINGS METHOD
    cout << story.append("NICE TO MEET YOU, GOOD BYE") << endl;
    cout << story.find('l') << endl;
    cout << story.substr(5, 19) << endl;
    cout << story.length() << endl;
    return 0;
}