#include <stdio.h>

int main(){
    int km;
    int amount;

    printf("Distance -> ");
    scanf("%i",&km);

    if(km < 30){
        amount = km * 50;
        printf("Amount = %i x 50 = %i",km,amount);
    }
    else{
        amount = 1500 + (km - 30) * 40;
        printf("Amount = 30 x 50 + (%i - 30) x 40 = %i",km,amount);
    }
    return 0;
}