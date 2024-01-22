#include "Box.h"
#include <iostream>
using namespace std;

Box::Box(){
    height = width = length = 0;
}

void Box::setLength(int len){
    length = len;
}

void Box::setWidth(int wdt){
    width = wdt;
}

void Box::setHeight(int h){
    height = h;
}

int Box::getLength(){
    return length;
}

int Box::getWidth(){
    return width;
}

int Box::getHeight(){
    return height;
}

int Box::calcVolume(){
    return height * width * length;
}