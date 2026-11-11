#include <stdio.h>

int main()
{
    int choice;

    do
    {
        printf("\nMENU\n");
        printf("1. View salaries\n");
        printf("2. Add salary\n");
        printf("3. Search salary\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

    } while (choice != 4);

    printf("Program terminated.\n");

    return 0;
}