#include <iostream>
using namespace std;

void print(int len, int wth);
void input(int &len, int &wth);

// Do not change the main() function
int main() {
    int length = 10, width = 5;
    input(length, width);
    print(length, width);
    return 0;
}

// Do not change the print() function
void print(int len, int wth) {
    cout << "Length : " << len
    << ", Width : " << wth << endl;
}

// this function follows pass by value method. it doesnt change original var . bcs var are copying after func calling
// void input(int len, int wth)(
//     cout << "Length -> ";
//     cin >> len;

//     cout << "Width -> ";
//     cin >> wth;
// )

// this function follows pass by refference method. it can acces original var in main function.
void input(int &len, int &wth){
    cout << "Length -> ";
    cin >> len;

    cout << "Width -> ";
    cin >> wth;
}
