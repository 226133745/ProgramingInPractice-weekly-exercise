#include <stdio.h>

int main()
{
    float budgets[10];
    float temp;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter budget %d: ", i + 1);
        scanf("%f", &budgets[i]);
    }

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (budgets[j] > budgets[j + 1])
            {
                temp = budgets[j];
                budgets[j] = budgets[j + 1];
                budgets[j + 1] = temp;
            }
        }
    }

    printf("\nBudgets in Ascending Order:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%.2f\n", budgets[i]);
    }

    return 0;
}
