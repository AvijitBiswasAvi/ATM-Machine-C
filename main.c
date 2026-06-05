#include <stdio.h>

void checkbalance(int);
int deposit(int);
int withdraw(int);

void checkbalance(int balance)
{
    printf("Your Balance is = $%d\n", balance);
}
int deposit(int balance)
{
    int amount;
    printf("Enter your deposit amount = ");
    scanf("%d", &amount);

    if (amount < 0)
    {
        printf("Please enter higher amount");
        return balance;
    }
    printf("You have deposited = $%d\n", amount);
    balance += amount;
    printf("Your current balance = $%d", balance);
    return balance;

}
int withdraw(int balance)
{
    int amount;
    printf("Enter your withdraw amount = ");
    scanf("%d", &amount);

    if (amount <= 0)
    {
        printf("Please enter higher amount");
    }
    else if (amount > balance)
    {
        printf("Withdraw not possible");
    }
    else
    {
        balance -= amount;
        printf("Successfully withdraw = $%d\n", amount);
    }
    printf("Your current balance = $%d", balance);
    return balance;
}
int main()
{
    int balance = 1000;
    int choice;
    int atm_pin = 12345;
    int user_pin;
    
    printf("Enter your pin = ");
    scanf("%d", &user_pin);

    if (user_pin != atm_pin)
    {
        printf("Error ! INVALID PIN");
    }
    else
    {
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
            
            printf("Enter your choice =  ");
            scanf("%d", &choice);
           

            switch (choice)
            {
            case 1:
                checkbalance(balance);
                break;
            case 2:
                balance = deposit(balance);
                break;
            case 3:
                balance = withdraw(balance);
                break;
            case 4:
                printf("Thank you for using our ATM");
                break;
            default:
                printf("INVALID CHOICE");
                break;
            }
        } while (choice != 4);
    }
    return 0;
}