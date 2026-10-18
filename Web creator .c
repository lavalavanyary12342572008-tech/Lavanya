
#include <stdio.h>

int main() {
    int choice;
    char websiteName[100];
    char ownerName[100];
    char purpose[200];

    printf("====================================\n");
    printf("       WEB CREATOR SYSTEM\n");
    printf("====================================\n");

    printf("Create Your Website Profile!\n");

    printf("\nEnter Website Name: ");
    scanf(" %99[^\n]", websiteName);

    printf("Enter Owner Name: ");
    scanf(" %99[^\n]", ownerName);

    printf("Enter Website Purpose: ");
    scanf(" %199[^\n]", purpose);

    do {
        printf("\n========== WEB MENU ==========\n");
        printf("1. View Website Details\n");
        printf("2. View Web Development Steps\n");
        printf("3. View Web Technologies\n");
        printf("4. Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n------ WEBSITE DETAILS ------\n");
                printf("Website Name: %s\n", websiteName);
                printf("Owner Name: %s\n", ownerName);
                printf("Purpose: %s\n", purpose);
                printf("Status: Profile Created\n");
                break;

            case 2:
                printf("\n--- WEB DEVELOPMENT STEPS ---\n");
                printf("1. Plan the website\n");
                printf("2. Design the webpage\n");
                printf("3. Write HTML and CSS code\n");
                printf("4. Add JavaScript features\n");
                printf("5. Test the website\n");
                printf("6. Publish the website\n");
                break;

            case 3:
                printf("\n------ WEB TECHNOLOGIES ------\n");
                printf("HTML: Webpage Structure\n");
                printf("CSS: Webpage Design\n");
                printf("JavaScript: Interactivity\n");
                printf("C: General-purpose programming\n");
                break;

            case 4:
                printf("\nThank you for using Web Creator!\n");
                break;

            default:
                printf("\nInvalid choice! Try again.\n");
        }

    } while (choice != 4);

    printf("\nWeb Development Starts With An Idea!\n");

    return 0;
}
