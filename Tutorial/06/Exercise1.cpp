#include <iostream>
using namespace std;

int main(){
    float number1 = 6.2;
    float number2 = 7.3;
    float* fPtr; //1

    fPtr = &number1; //2
    cout << "The value of fPtr is: " << *fPtr << endl; //3
    
    number2 = *fPtr; //4
    
    cout << "The value of number2 is: " << number2 << endl; //5
    cout << "The Address of number1 is: " << &number1 << endl; //6
    cout << "The Address of number2 is: " << &number2 << endl; //6

    cout << "The Address of fPtr is: " << &fPtr << endl; //7 -> No bcs fptr is another var pointer it has a another Address

    return 0;
}