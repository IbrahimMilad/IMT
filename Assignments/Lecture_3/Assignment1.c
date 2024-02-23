#include <stdio.h>

int main()
 {
    while (1) { 
        int num1, num2;

       
        printf("Enter the first number: ");
        scanf("%d", &num1);

        printf("Enter the second number: ");
        scanf("%d", &num2);

        
        int Result = num1 + num2;
        printf("Result: %d + %d = %d\n", num1, num2, Result);
    }

    return 0;
}