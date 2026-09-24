#include <stdio.h>

int main() {
    float shoppingAmount, distance, deliveryCharge = 0.0, totalPayable;

    printf("Enter shopping amount (Rs.): ");
    scanf("%f", &shoppingAmount);

    printf("Enter delivery distance (in km): ");
    scanf("%f", &distance);

    
    if (shoppingAmount <= 0 || distance <= 0) {
        printf("Invalid Input\n");
    } else {
                    
        if (shoppingAmount >= 5000) {
            deliveryCharge = 0.0;
        } 
        
        else {
            if (distance <= 5) {
                deliveryCharge = 150.0;
            } else if (distance <= 10) {
                deliveryCharge = 250.0;
            } else if (distance <= 20) {
                deliveryCharge = 400.0;
            } else {
                deliveryCharge = 600.0;
            }
        }

        totalPayable = shoppingAmount + deliveryCharge;

        
        printf("\n--- Bill Summary ---\n");
        printf("Shopping Amount: Rs. %.2f\n", shoppingAmount);
        printf("Delivery Charges: Rs. %.2f\n", deliveryCharge);
        printf("Total Payable Amount: Rs. %.2f\n", totalPayable);
    }

    return 0;
}

