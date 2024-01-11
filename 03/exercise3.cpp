#include <iostream>
using namespace std;

double volume(double Height, double Length, double Width);

struct Box
{
    double Height;
    double Width;
    double length;
};

int main(){

    Box box1;
    Box box2;

    cout << "Enter Box 1 Height : ";
    cin >> box1.Height;
    cout << "Enter Box 1 Width : ";
    cin >> box1.Width;
    cout << "Enter Box 1 Length : ";
    cin >> box1.length;

    cout << "Enter Box 2 Height : ";
    cin >> box2.Height;
    cout << "Enter Box 2 Width : ";
    cin >> box2.Width;
    cout << "Enter Box 2 Length : ";
    cin >> box2.length;

    double totalVolume = volume(box1.Height,box1.length,box1.Width) + volume(box2.Height,box2.length,box2.Width);

    cout << "Volume of Box is " << totalVolume << endl;

    return 0;
}

double volume(double Height, double Length, double Width){
    return Height * Length * Width;
}