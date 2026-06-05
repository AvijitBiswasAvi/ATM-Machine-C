#include <stdio.h>

void checkBalance(int balance);
int deposit(int balance);
int withdraw(int balance);

void checkBalance(int balance)
{
    printf("\nYour Current Balance = $%d\n", balance);
}

int deposit(int balance)
{
    int amount;

    printf("Enter deposit amount = ");
    scanf("%d", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
        return balance;
    }

    balance += amount;

    printf("Successfully deposited $%d\n", amount);
    printf("Your current balance = $%d\n", balance);

    return balance;
}

int withdraw(int balance)
{
    int amount;

    printf("Enter withdraw amount = ");
    scanf("%d", &amount);

    if (amount <= 0)
    {
        printf("Invalid amount!\n");
        return balance;
    }

    if (amount > balance)
    {
        printf("Insufficient balance!\n");
        printf("Your current balance = $%d\n", balance);
        
        return balance;
    }

    balance -= amount;

    printf("Successfully withdrew $%d\n", amount);
    printf("Your current balance = $%d\n", balance);

    return balance;
}

int main()
{
    int balance = 1000;
    int choice;
    int transactions = 0;

    const int atm_pin = 12345;
    int user_pin;

    printf("===== ATM LOGIN =====\n");
    printf("Enter PIN: ");
    scanf("%d", &user_pin);

    if (user_pin != atm_pin)
    {
        printf("ERROR: Invalid PIN!\n");
        return 0;
    }

    printf("\nLogin Successful!\n");

    do
    {
        printf("\n");
        printf("|=====================|\n");
        printf("|        MENU         |\n");
        printf("|---------------------|\n");
        printf("| 1. Check Balance    |\n");
        printf("| 2. Deposit Money    |\n");
        printf("| 3. Withdraw Money   |\n");
        printf("| 4. Exit             |\n");
        printf("|=====================|\n");

        printf("Enter your choice = ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            checkBalance(balance);
            break;

        case 2:
            balance = deposit(balance);
            transactions++;
            break;

        case 3:
            balance = withdraw(balance);
            transactions++;
            break;

        case 4:
            printf("\nThank you for using our ATM!\n");
            break;

        default:
            printf("Invalid Choice! Please try again.\n");
        }

    } while (choice != 4);

    printf("Total Transactions = %d\n", transactions);

    return 0;
}