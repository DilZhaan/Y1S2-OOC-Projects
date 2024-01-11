#include <stdio.h>

int main(){
    int n = 0;
    int answer = 0;

    printf("n -> ");
    scanf("%i",&n);

    printf("sum = ");
    for (int i = 0; i <= n; i++){
        (i == n )? printf("%i = ",i) : printf("%i + ",i);
        answer += i;
    }
    printf("%i",answer);
    
    return 0;
}