#include <stdio.h>
#include <math.h>

int main()
{
    int num0, num1;
    char optr;
    char choice;

    do {
        printf("\n==== SIMPLE CALCULATOR ====\n");
        printf("Select an operator:\n");
        printf("+  -  *  /  ^\n");

        printf("Enter operator: ");
        scanf(" %c", &optr);

        printf("Enter two numbers: ");
        scanf("%d %d", &num0, &num1);

        if(optr == '+') {
            printf("Result: %d\n", num0 + num1);
        }
        else if(optr == '-') {
            printf("Result: %d\n", num0 - num1);
        }
        else if(optr == '*') {
            printf("Result: %d\n", num0 * num1);
        }
        else if(optr == '/') {
            if(num1 == 0) {
                printf("Math Error: Division by zero\n");
            } else {
                printf("Result: %d\n", num0 / num1);
            }
        }
        else if(optr == '^') {
            printf("Result: %.0lf\n", pow(num0, num1));
        }
        else {
            printf("Invalid operator!\n");
        }

        printf("\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &choice);

    } while(choice == 'y' || choice == 'Y');

    printf("\nCalculator exited.\n");

    return 0;
}
