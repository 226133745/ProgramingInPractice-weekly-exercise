#include <stdio.h>

int main()
{
    float basicSalary, housing, transport, tax;
    float grossSalary, netSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Housing Allowance: ");
    scanf("%f", &housing);

    printf("Enter Transport Allowance: ");
    scanf("%f", &transport);

    printf("Enter Tax: ");
    scanf("%f", &tax);

    grossSalary = basicSalary + housing + transport;
    netSalary = grossSalary - tax;

    printf("\nGross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);

    if (netSalary >= 20000)
    {
        printf("Income Category: High Income\n");
    }
    else
    {
        printf("Income Category: Standard Income\n");
    }

    return 0;
}