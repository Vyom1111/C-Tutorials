# include<stdio.h>
# include<math.h>
int main () {
    //Number is +ve, -ve, odd, even
    int number;
    printf("enter number");
    scanf("%d", &number);
    if(number >= 0) {
        printf("number is positive \n");
        if(number %2 == 0) {
            printf("even \n");
        } else {
            printf("odd \n");
        }
    } else {
        printf("number is negative");
    }

            
    
   
    return 0;
}