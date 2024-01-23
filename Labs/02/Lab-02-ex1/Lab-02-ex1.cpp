// Lab-02-ex1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define SIZE 10
using namespace std;

int numArr[SIZE];

int searchKey(int Value) {
    for (int i = 0; i < SIZE; i++) {
        if (numArr[i] == Value){
            return i;
        }
    }
    return -1;
}

int findMax() {
    int max = numArr[0];

    for (int i = 1; i < 10; i++) {
        if (numArr[i] > max) {
            max = numArr[i];
        }
    }

    return max;
}

int main()
{
    int num = 0;

    for (int i = 0; i < SIZE; i++) {
        cout << "Enter the " << i+1 << " Number : ";
        cin >> numArr[i];
    }

    int searchResult = searchKey(num);
    
    if (searchResult == -1) {
        cout << "Value not found" << endl;
    }
    else {
        cout << "Searched Value Index : " << searchResult << endl;
    }
    cout << "Max Value : " << findMax() << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
