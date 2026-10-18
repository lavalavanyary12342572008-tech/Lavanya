
#include <stdio.h>

int main() {
    int choice;
    int softwareId = 101;
    int installed = 0;
    float price, discount, finalPrice;

    printf("====================================\n");
    printf("      SOFTWARE MANAGEMENT SYSTEM\n");
    printf("====================================\n");

    do {
        printf("\n1. Software Information");
        printf("\n2. Software Installation");
        printf("\n3. Software Price Calculation");
        printf("\n4. Software Status");
        printf("\n5. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\n--- SOFTWARE INFORMATION ---\n");
                printf("Software ID: %d\n", softwareId);
                printf("Software Name: Smart Manager\n");
                printf("Language: C Programming\n");
                printf("Category: Application Software\n");
                printf("Purpose: Business Management\n");
                break;

            case 2:
                if (installed == 0) {
                    installed = 1;
                    printf("\nSoftware installed successfully!\n");
                } else {
                    printf("\nSoftware is already installed.\n");
                }
                break;

            case 3:
                printf("\nEnter software price: ");
                scanf("%f", &price);

                printf("Enter discount percentage: ");
                scanf("%f", &discount);

                if (price < 0 || discount < 0 || discount > 100) {
                    printf("Invalid price or discount!\n");
                } else {
                    finalPrice = price - (price * discount / 100);

                    printf("Original Price: %.2f\n", price);
                    printf("Discount: %.2f%%\n", discount);
                    printf("Final Price: %.2f\n", finalPrice);
                }
                break;

            case 4:
                printf("\n--- SOFTWARE STATUS ---\n");

                if (installed == 1) {
                    printf("Status: Installed\n");
                } else {
                    printf("Status: Not Installed\n");
                }
                break;

            case 5:
                printf("\nThank you for using Smart Manager!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 5);

    printf("\nProgram completed successfully!\n");

    return 0;
}
