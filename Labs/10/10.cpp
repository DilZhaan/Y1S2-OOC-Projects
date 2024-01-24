#include "Order.h"
#include <iostream>
using namespace std;

int main()
{
    Order order1(1,3);

    order1.addItem(102, "Burger", 550.00);
    order1.addItem(114, "Sandwitch", 390.00);
    order1.addItem(215, "Fish&chips", 450.00);

    order1.calTotPrice();

    return 0;
}