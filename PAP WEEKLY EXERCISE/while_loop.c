#include <stdio.h>

int main()
{
    float salary = -1;

    while (salary <= 0)
    {
        printf("Enter a positive salary: ");
        scanf("%f", &salary);

        if (salary <= 0)
        {
            printf("Invalid salary. Try again.\n");
        }
    }

    printf("Valid salary entered: %.2f\n", salary);

    return 0;
}