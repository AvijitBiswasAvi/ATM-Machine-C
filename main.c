#include <stdio.h>

void checkbalance(int);
int deposit(int);
int withdraw(int);

void checkbalance(int balance)
{
    printf("You'r Balance is = $%d\n", balance);
}
int main()
{
    int balance = 1000;
    int choice;

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

    return 0;
}