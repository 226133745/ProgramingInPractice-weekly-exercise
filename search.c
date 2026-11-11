#include <stdio.h>

int main()
{
    float salaries[20];
    float searchSalary;
    int found = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Enter salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    printf("Enter salary to search for: ");
    scanf("%f", &searchSalary);

    for (int i = 0; i < 20; i++)
    {
        if (salaries[i] == searchSalary)
        {
            printf("Salary found at position %d\n", i);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Salary not found.\n");
    }

    return 0;
}