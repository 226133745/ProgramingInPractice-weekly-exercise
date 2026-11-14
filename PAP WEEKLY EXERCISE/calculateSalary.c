#include <stdio.h>

float calculateSalary(float basic, float housing, float transport)
{
    return basic + housing + transport;
}

int main()
{
    float basic, housing, transport, salary;

    printf("Basic Salary: ");
    scanf("%f", &basic);

    printf("Housing Allowance: ");
    scanf("%f", &housing);

    printf("Transport Allowance: ");
    scanf("%f", &transport);

    salary = calculateSalary(basic, housing, transport);

    printf("Gross Salary: %.2f\n", salary);

    return 0;
}