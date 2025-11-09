//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float costPrice, sellingPrice, profit, loss, percentage;

    // Input cost price and selling price
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    // Check for profit, loss, or no profit-no loss
    if (sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        percentage = (profit / costPrice) * 100;
        printf("Profit %.2f%%\n", percentage);
    } 
    else if (sellingPrice < costPrice) {
        loss = costPrice - sellingPrice;
        percentage = (loss / costPrice) * 100;
        printf("Loss %.2f%%\n", percentage);
    } 
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
