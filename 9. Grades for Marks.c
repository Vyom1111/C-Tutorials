# include<stdio.h>
# include<math.h>
int main () {
    
    // Give Grades to Student
    
    int marks;
    printf("Enter Marks(0-100) : ");
    scanf("%d", &marks);

    if(marks < 30) {
        printf("C \n");
    }
    else if(marks >= 30 && marks < 70) {
        printf("B \n");
    }
    else if(marks >= 70 && marks < 90) {
        printf("A \n");
    }
    else if(marks >= 90 && marks <= 100) {
        printf("A+ \n");
    }
   
    return 0;
}