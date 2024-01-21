#include <stdio.h>

int main(){
    float mark1;
    float mark2;

    printf("Enter Mark1 : ");
    scanf("%f",&mark1);

    printf("Enter Mark2 : ");
    scanf("%f",&mark2);

    printf("%.2f", mark1+mark2);

    return 0;
}