#include <stdio.h>

int maximum(int num1, int num2){
    return (num1 > num2)? num1 : num2;
}

int minimum(int num1, int num2){
    return (num1 > num2)? num2 : num1;
}

int multiply(int num1, int num2){
    return num1 * num2;
}

int main() {
    int no1, no2;
    printf("Enter a value for no 1 : "); 
    scanf("%d", &no1);
    printf("Enter a value for no 2 : "); 
    scanf("%d", &no2);
    printf("%d ", minimum(no1, no2)); 
    printf("%d ", maximum(no1, no2)); 
    printf("%d ", multiply(no1, no2)); 
    return 0;
}