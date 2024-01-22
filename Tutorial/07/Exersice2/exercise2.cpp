#include "Box.h"
#include <iostream>
using namespace std;

int main(){
    Box box1;
    int length , width , height;

    cout << "Enter the Box1 :" << endl;

    cout << "Length : ";
    cin >> length;
    box1.setLength(length);

    cout << "Width : ";
    cin >> width;
    box1.setWidth(width);

    cout << "Height : ";
    cin >> height;
    box1.setHeight(height);

    // cout << box1.calcVolume();
    return 0;
}