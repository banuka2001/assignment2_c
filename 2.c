#include <stdio.h>

int main()  {
   
   int number,sum = 0;

    printf("Enter a number: ");
        scanf("%d",&number);

    // Check if the number inbetween 1-10
    if (number >= 1 && number <= 10) 
    {
        // run until i equal to the entered number 
        for (int i = 1; i <= number; i++)
        {
            sum += i;
            // sum = sum + i
          
        }
        
    }    else if (number < 1) {
        printf(" Number less than 1 ");
    }   else {
        printf ("Number is greater than 10\n\n");
    }
    
    
    printf("%d",sum);

    return 0;
}




