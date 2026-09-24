#include <stdio.h>

int main() {
    float balance = 50000.0;
    float amount;
    int choice;

    printf("=== Welcome to ATM System ===\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Current Account Balance: Rs. %.2f\n", balance);
    } 
    else if (choice == 2) {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        if (amount > 0) {
            balance += amount;
            printf("Deposit Successful! Updated Balance: Rs. %.2f\n", balance);
        } else {
            printf("Invalid deposit amount.\n");
        }
    } 
    else if (choice == 3) {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        if (amount <= 0) {
            printf("Invalid withdrawal amount.\n");
        } else if (amount <= balance) {
            balance -= amount;
            printf("Withdrawal Successful! Remaining Balance: Rs. %.2f\n", balance);
        } else {
            printf("Insufficient Balance\n");
        }
    } 
    else if (choice == 4) {
        printf("Thank you for using the ATM\n");
    } 
    else {
        printf("Invalid Option\n");
    }

    return 0;
}
