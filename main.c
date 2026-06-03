#include <stdio.h>

int main()
{
    int choice;

    printf("|========================|\n");
    printf("|         MENU           |\n");
    printf("|------------------------|\n");
    printf("| 1. Check Balance       |\n");
    printf("| 2. Deposit Money       |\n");
    printf("| 3. Withdraw Money      |\n");
    printf("| 4. Exit                |\n");
    printf("|========================|\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);
    return 0;
}