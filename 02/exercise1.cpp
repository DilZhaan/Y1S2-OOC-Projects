#include <iostream>
using namespace std;
int main(void) 
{
    float cm, inches;
    cout << "Enter a length in cm : ";
    cin >> cm;
    inches = cm / 2.54;
    cout << "Length in inches is " << inches << endl;

    return 0;
} 