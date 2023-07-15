#include<stdio.h>
#include<math.h>
int main() {

int a, b, c;
printf("Enter value of a");
scanf("%d", &a);
printf("Enter value of b");
scanf("%d", &b);
printf("Enter value of c");
scanf("%d", &c);

int average = (a+b+c) / 3;

printf("Value of Average of three numbers is :%d", average);
return 0;

}