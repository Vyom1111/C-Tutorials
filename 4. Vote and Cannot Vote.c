# include<stdio.h>
# include<math.h>
int main () {
    int age = 19;
    printf("enter age :");
    scanf("%d", &age);

    if(age > 18) {
        printf("adult \n");
        printf("they can vote \n");
        }
    else {
        printf("not adult \n");
        printf("they cannot vote");
    }

    printf("thank you");
   
    return 0;
}