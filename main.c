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

        switch (choice)
        {
        case 1:
            int score;
            int user_answer;

            char questions[5][100] =
            {
                "Who's the the captain of the Straw-Hats(one piece) ?",
                "How much Senku was sure of ?",
                "What was captain Levi ?",
                "Where was Snake from ?",
                "What was Musashi's ture name ?",
            };
            break;
        
        default:
            break;
        }
  
    } while (choice != 3);
    
    return 0;
}