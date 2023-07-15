#include<stdio.h>
int main() {

int i, n;
int t1 = 0, t2 = 1;
int nextTerm = t1 + t2;

printf("Enter number of terms to be printed");
scanf("%d", &n);

printf("%d, %d, ", t1, t2);

for(int i = 3; i<=n; i++) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
}


return 0;
}