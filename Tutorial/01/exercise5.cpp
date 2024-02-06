#include <iostream>
using namespace std;

int main(void){
    //varible declaration
    float cm, inches;
    //get input from user
    cout << "Enter a length in cm : ";
    cin >> cm;
    //calculation part
    inches = cm / 2.54;
    cout << "Length in inches is " << inches << endl;
    
    return 0;
}