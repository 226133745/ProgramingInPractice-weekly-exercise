#include <stdio.h>

int main()
{
    float salary;

    for (int i = 1; i <= 20; i++)
    {
        printf("Enter salary %d: ", i);
        scanf("%f", &salary);

        if (salary == 0)
        {
            printf("Data capture stopped.\n");
            break;
        }

        if (salary < 0)
        {
            printf("Negative salary ignored.\n");
            continue;
        }

        printf("Salary accepted: %.2f\n", salary);
    }

    return 0;
}