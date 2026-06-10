#include <stdio.h>

int main() {
    int choice;
    do
    {
        printf("\n");
        printf("|=====================|\n");
        printf("|        MENU         |\n");
        printf("|---------------------|\n");
        printf("| 1. Start Quiz       |\n");
        printf("| 2. View Rules       |\n");
        printf("| 3. Exit             |\n");
        printf("|=====================|\n");

        printf("Enter your choice = ");
        scanf("%d", &choice);
  
    } while (choice != 3);
    
    return 0;
}