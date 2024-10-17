#include <stdio.h>

int main() {
    
    int customerID, unitsConsumed;
    char customerName[50];
    float chargePerUnit, totalBill, surcharge ;

    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%d", &unitsConsumed);

    if (unitsConsumed < 200) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    totalBill = unitsConsumed * chargePerUnit;

    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
    }
    
    if (totalBill < 100) {
        totalBill = 100;
    }

    printf("Customer ID       : %d\n", customerID);
    printf("Customer Name     : %s\n", customerName);
    printf("Units Consumed    : %d\n", unitsConsumed);
    printf("Charge per Unit   : %.2f\n", chargePerUnit);
    printf("Surcharge         : %.2f\n", surcharge);
    printf("Total Amount to Pay: %.2f\n", totalBill);
    

    return 0;
}