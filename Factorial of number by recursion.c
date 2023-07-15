#include<stdio.h>
#include<math.h>

int factorial(int n);

int main() {

    printf("Factorial is %d", factorial(6));


    return 0;
}

int factorial(int n) {
    int fact;
    if (n == 1) {
        return 1;
    } else {
        fact = factorial(n-1)*n;
        return fact;
    }
}