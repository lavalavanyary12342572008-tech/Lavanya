
#include <stdio.h>

#define MAX 100

int main() {
    int data[MAX];
    int n, i, choice;
    int sum = 0;
    int largest, smallest;
    float average;
    int positive = 0, negative = 0, zero = 0;

    printf("====================================\n");
    printf("       DATA ANALYSIS SYSTEM\n");
    printf("====================================\n");

    printf("Enter number of data values (1-100): ");
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid number of values!\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &data[i]);
    }

    largest = data[0];
    smallest = data[0];

    do {
        printf("\n========== MENU ==========\n");
        printf("1. Display Data\n");
        printf("2. Calculate Sum\n");
        printf("3. Calculate Average\n");
        printf("4. Find Largest and Smallest\n");
        printf("5. Count Positive, Negative and Zero\n");
        printf("6. Display Complete Report\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nData Values:\n");
                for (i = 0; i < n; i++) {
                    printf("%d ", data[i]);
                }
                printf("\n");
                break;

            case 2:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += data[i];
                }
                printf("Sum = %d\n", sum);
                break;

            case 3:
                sum = 0;
                for (i = 0; i < n; i++) {
                    sum += data[i];
                }
                average = (float)sum / n;
                printf("Average = %.2f\n", average);
                break;

            case 4:
                largest = data[0];
                smallest = data[0];

                for (i = 1; i < n; i++) {
                    if (data[i] > largest)
                        largest = data[i];

                    if (data[i] < smallest)
                        smallest = data[i];
                }

                printf("Largest Value = %d\n", largest);
                printf("Smallest Value = %d\n", smallest);
                break;

            case 5:
                positive = 0;
                negative = 0;
                zero = 0;

                for (i = 0; i < n; i++) {
                    if (data[i] > 0)
                        positive++;
                    else if (data[i] < 0)
                        negative++;
                    else
                        zero++;
                }

                printf("Positive Values = %d\n", positive);
                printf("Negative Values = %d\n", negative);
                printf("Zero Values = %d\n", zero);
                break;

            case 6:
                sum = 0;
                largest = data[0];
                smallest = data[0];
                positive = 0;
                negative = 0;
                zero = 0;

                for (i = 0; i < n; i++) {
                    sum += data[i];

                    if (data[i] > largest)
                        largest = data[i];

                    if (data[i] < smallest)
                        smallest = data[i];

                    if (data[i] > 0)
                        positive++;
                    else if (data[i] < 0)
                        negative++;
                    else
                        zero++;
                }

                average = (float)sum / n;

                printf("\n======= DATA REPORT =======\n");
                printf("Number of Values = %d\n", n);
                printf("Sum = %d\n", sum);
                printf("Average = %.2f\n", average);
                printf("Largest = %d\n", largest);
                printf("Smallest = %d\n", smallest);
                printf("Positive = %d\n", positive);
                printf("Negative = %d\n", negative);
                printf("Zeros = %d\n", zero);
                printf("===========================\n");
                break;

            case 7:
                printf("Thank you for using Data Analysis System!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 7);

    return 0;
}
