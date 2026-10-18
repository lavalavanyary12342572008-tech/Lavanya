
#include <stdio.h>

#define ROWS 10
#define COLS 5

int main() {
    int data[ROWS][COLS];
    int rows, cols;
    int i, j, choice;
    int total;
    float average;

    printf("====================================\n");
    printf("     SPREADSHEET MANAGEMENT SYSTEM\n");
    printf("====================================\n");

    printf("Enter number of rows (1-10): ");
    scanf("%d", &rows);

    printf("Enter number of columns (1-5): ");
    scanf("%d", &cols);

    if (rows < 1 || rows > ROWS ||
        cols < 1 || cols > COLS) {
        printf("Invalid row or column size!\n");
        return 0;
    }

    printf("\nEnter spreadsheet values:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Cell [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &data[i][j]);
        }
    }

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Display Spreadsheet\n");
        printf("2. Calculate Row Totals\n");
        printf("3. Calculate Column Totals\n");
        printf("4. Calculate Average\n");
        printf("5. Find Largest Value\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n--- SPREADSHEET DATA ---\n");

                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        printf("%8d", data[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("\n--- ROW TOTALS ---\n");

                for (i = 0; i < rows; i++) {
                    total = 0;

                    for (j = 0; j < cols; j++) {
                        total += data[i][j];
                    }

                    printf("Row %d Total = %d\n",
                           i + 1, total);
                }
                break;

            case 3:
                printf("\n--- COLUMN TOTALS ---\n");

                for (j = 0; j < cols; j++) {
                    total = 0;

                    for (i = 0; i < rows; i++) {
                        total += data[i][j];
                    }

                    printf("Column %d Total = %d\n",
                           j + 1, total);
                }
                break;

            case 4:
                total = 0;

                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        total += data[i][j];
                    }
                }

                average = (float) total / (rows * cols);

                printf("\nAverage = %.2f\n", average);
                break;

            case 5: {
                int largest = data[0][0];

                for (i = 0; i < rows; i++) {
                    for (j = 0; j < cols; j++) {
                        if (data[i][j] > largest) {
                            largest = data[i][j];
                        }
                    }
                }

                printf("\nLargest Value = %d\n", largest);
                break;
            }

            case 6:
                printf("\nThank you for using Spreadsheet!\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}
