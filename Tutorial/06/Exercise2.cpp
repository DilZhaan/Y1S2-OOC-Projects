#include <iostream>
using namespace std;

int main(){
    float num1,num2; //1

    cout << "Enter the value for Num2 : "; //2
    cin >> num2;//2

    float* fPtr1; //3
    float* fPtr2; //3

    fPtr1 = &num1; //4
    fPtr2 = &num2; //4

    *fPtr1 = 7.8; //5

    *fPtr2 -= 14.2; //6

    cout << "The value of num1 is: " << *fPtr1 << endl; //7
    cout << "The value of num2 is: " << *fPtr2 << endl; //7

    cout << "The value of num1 + num2 is: " << *fPtr1  + *fPtr2 << endl; //8
    return 0;
}