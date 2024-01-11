#include <iostream>
#include <map>

std::map<int,long> cache;

long Factorial(int no);
long nCr(int n, int r);

int main() {
    int n, r;
    std::cout << "Enter a value for n ";
    std::cin >> n;
    std::cout << "Enter a value for r ";
    std::cin >> r;
    std::cout << "nCr = ";
    std::cout << nCr(n,r);
    std::cout << std::endl;
}

long Factorial(int no){
    if (no == 1){
        return 1;
    }else if (cache.find(no) == cache.end()){
        long fact = Factorial(no - 1);
        cache[no - 1] = fact;
        return no * fact;
    }
    return cache[no];
}

long nCr(int n, int r){
    return Factorial(n) / (Factorial(r) * Factorial(n-r));
}