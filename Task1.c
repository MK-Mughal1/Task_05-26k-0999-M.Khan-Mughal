#include <stdio.h>

int main() {
    float billAmount, discountPercent = 0.0, discountAmount, finalAmount;
    int member;

    printf("Enter the total bill amount: ");
    scanf("%f", &billAmount);

    printf("Are you a member? Enter 1 for Member, 0 for Non-Member: ");
    scanf("%d", &member);

    // Determine discount percentage
    if (billAmount >= 5000) {
        if (member == 1) {
            discountPercent = 20.0;
        } else {
            discountPercent = 10.0;
        }
    } else {
        if (member == 1) {
            discountPercent = 10.0;
        } else {
            discountPercent = 0.0;
        }
    }

    
    discountAmount = (discountPercent / 100.0) * billAmount;
    finalAmount = billAmount - discountAmount;


    printf("\n--- Bill Summary ---\n");
    printf("Original Bill: Rs. %.2f\n", billAmount);
    printf("Discount Amount (%.0f%%): Rs. %.2f\n", discountPercent, discountAmount);
    printf("Final Payable Amount: Rs. %.2f\n", finalAmount);

    return 0;
}
