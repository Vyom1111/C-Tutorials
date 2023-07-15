# include<stdio.h>
# include<math.h>
int main () {
    
    // Student is Pass or Fail
    
    int number;
    printf("enter Marks of Student( 0 to 100) : ");
    scanf("%d", &number);

    if(number >= 30 && number <= 100) {
        printf("Congratulations, Student is Pass \n");
        
        } else if(number >=0 && number <=30) {
            printf("Sorry, Student is Fail");
        
    } else { 
        printf("Wrong Marks");
    }
   
    return 0;
}