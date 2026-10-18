
#include <stdio.h>

int main() {
    int choice;
    float income, expenses, profit;
    float investment, sales, discount;
    float marketingCost, netProfit;

    printf("====================================\n");
    printf("   FINANCE AND MARKETING SYSTEM\n");
    printf("====================================\n");

    printf("\n1. Finance Calculation");
    printf("\n2. Marketing Calculation");
    printf("\n3. Profit Calculation");
    printf("\n4. Discount Calculation");
    printf("\n5. Exit");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice) {

        case 1:
            printf("\nEnter total income: ");
            scanf("%f", &income);

            printf("Enter total expenses: ");
            scanf("%f", &expenses);

            profit = income - expenses;

            printf("\n------ FINANCE REPORT ------\n");
            printf("Total Income: %.2f\n", income);
            printf("Total Expenses: %.2f\n", expenses);
            printf("Net Profit/Loss: %.2f\n", profit);

            if (profit > 0) {
                printf("Status: Profit\n");
            } else if (profit < 0) {
                printf("Status: Loss\n");
            } else {
                printf("Status: No Profit, No Loss\n");
            }
            break;

        case 2:
            printf("\nEnter marketing investment: ");
            scanf("%f", &investment);

            printf("Enter sales revenue: ");
            scanf("%f", &sales);

            marketingCost = investment;
            netProfit = sales - marketingCost;

            printf("\n------ MARKETING REPORT ------\n");
            printf("Marketing Investment: %.2f\n",
                   marketingCost);
            printf("Total Sales: %.2f\n", sales);
            printf("Net Return: %.2f\n", netProfit);

            if (netProfit > 0) {
                printf("Marketing Result: Successful\n");
            } else {
                printf("Marketing Result: Needs Improvement\n");
            }
            break;

        case 3:
            printf("\nEnter total sales: ");
            scanf("%f", &sales);

            printf("Enter business expenses: ");
            scanf("%f", &expenses);

            printf("Enter marketing cost: ");
            scanf("%f", &marketingCost);

            profit = sales - expenses - marketingCost;

            printf("\n------ PROFIT REPORT ------\n");
            printf("Sales: %.2f\n", sales);
            printf("Expenses: %.2f\n", expenses);
            printf("Marketing Cost: %.2f\n", marketingCost);
            printf("Final Profit/Loss: %.2f\n", profit);
            break;

        case 4:
            printf("\nEnter product price: ");
            scanf("%f", &sales);

            printf("Enter discount percentage: ");
            scanf("%f", &discount);

            if (sales < 0 || discount < 0 || discount > 100) {
                printf("Invalid price or discount!\n");
                break;
            }

            profit = sales * discount / 100;
            netProfit = sales - profit;

            printf("\n------ DISCOUNT REPORT ------\n");
            printf("Original Price: %.2f\n", sales);
            printf("Discount Amount: %.2f\n", profit);
            printf("Final Price: %.2f\n", netProfit);
            break;

        case 5:
            printf("\nThank you for using the system!\n");
            break;

        default:
            printf("\nInvalid choice! Try again.\n");
    }

    printf("\n====================================\n");
    printf("   FINANCE AND MARKETING SYSTEM\n");
    printf("====================================\n");

    return 0;
}
