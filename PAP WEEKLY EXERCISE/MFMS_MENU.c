#include <stdio.h>

float calculateVAT(float amount)
{
    return amount * 0.15;
}

float calculateSalary(float basic, float housing, float transport)
{
    return basic + housing + transport;
}

float calculateBudget(float revenue, float expenses)
{
    return revenue - expenses;
}

int searchEmployee(int id, int ids[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(ids[i] == id)
            return i;
    }

    return -1;
}

void displayMenu()
{
    printf("\n==================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT\n");
    printf("==================================\n");
    printf("1. Calculate VAT\n");
    printf("2. Calculate Salary\n");
    printf("3. Calculate Budget\n");
    printf("4. Search Employee\n");
    printf("5. Exit\n");
    printf("Enter Choice: ");
}

int main()
{
    int choice;
    int employeeIDs[] = {101,102,103,104,105};

    do
    {
        displayMenu();
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            {
                float amount;
                printf("Enter Amount: ");
                scanf("%f", &amount);
                printf("VAT = %.2f\n",
                        calculateVAT(amount));
                break;
            }

            case 2:
            {
                float basic, housing, transport;

                printf("Basic Salary: ");
                scanf("%f", &basic);

                printf("Housing Allowance: ");
                scanf("%f", &housing);

                printf("Transport Allowance: ");
                scanf("%f", &transport);

                printf("Gross Salary = %.2f\n",
                       calculateSalary(basic, housing, transport));
                break;
            }

            case 3:
            {
                float revenue, expenses;
                float balance;

                printf("Revenue: ");
                scanf("%f", &revenue);

                printf("Expenses: ");
                scanf("%f", &expenses);

                balance = calculateBudget(revenue, expenses);

                printf("Balance = %.2f\n", balance);

                if(balance > 0)
                    printf("SURPLUS\n");
                else if(balance < 0)
                    printf("DEFICIT\n");
                else
                    printf("BALANCED\n");

                break;
            }

            case 4:
            {
                int id;
                int result;

                printf("Enter Employee ID: ");
                scanf("%d", &id);

                result = searchEmployee(id, employeeIDs, 5);

                if(result != -1)
                    printf("Employee found at position %d\n",
                           result);
                else
                    printf("Employee not found\n");

                break;
            }

            case 5:
                printf("Goodbye!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}