#include <stdio.h>

void checkBalance(int balance);
int depositMoney(int balance);
int withdrawMoney(int balance);

void checkBalance(int balance)
{
    printf("\nYour current balance is: $%d\n", balance);
}

int depositMoney(int balance)
{
    int amount;

    printf("Enter amount to deposit: ");
    scanf("%d", &amount);

    if (amount > 0)
    {
        balance += amount;
        printf("Successfully deposited $%d\n", amount);
    }
    else
    {
        printf("Invalid amount!\n");
    }

    return balance;
}

int withdrawMoney(int balance)
{
    int amount;

    printf("Enter amount to withdraw: ");
    scanf("%d", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
    }
    else if (amount > balance)
    {
        printf("Insufficient balance!\n");
    }
    else
    {
        balance -= amount;
        printf("Successfully withdrew $%d\n", amount);
    }

    return balance;
}

int main()
{
    int choice;
    int balance = 1000; // Starting balance

    do
    {
        printf("\n=================================\n");
        printf("          ATM MACHINE\n");
        printf("=================================\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("=================================\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;

        case 2:
            balance = depositMoney(balance);
            break;

        case 3:
            balance = withdrawMoney(balance);
            break;

        case 4:
            printf("\nThank you for using our ATM!\n");
            break;

        default:
            printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}

// Everything will be done from zero form tomorrow . 