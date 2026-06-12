#include <stdio.h>
#include <ctype.h>

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
        {
            int score = 0;
            char user_answer;

            char questions[5][100] =
            {
                "Who's the the captain of the Straw-Hats(one piece) ?",
                "How much Senku was sure of ?",
                "What was captain Levi ?",
                "Where was Snake from ?",
                "What was Musashi's ture name ?"
            };

            char options [5][4][50] = 
            {
                {"Monkey D. Luffy", "Zoro", "Nami", "Sanji"},
                {"5 billion", "10 billion", "15 billion", "20 billion"},
                {"Yeager", "Blutooth", "Ackerman","Macron"},
                {"Winterfell", "Kings Landing", "Miklagard", "Land of Dawn"},
                {"Aegon Targeriyan", "Takejo", "Dr. stone", "Dark King"}
            };

            char answers[5] = {'A', 'B', 'C', 'C', 'B'};

            for (int i = 0; i < 5; i++)
            {
                printf("\n%s\n",questions[i]);

                printf("\nA. %s\n", options[i][0]);
                printf("\nB. %s\n", options[i][1]);
                printf("\nC. %s\n", options[i][2]);
                printf("\nD. %s\n", options[i][3]);

                printf("Enter your answer(A/B/C/D) = ");
                scanf(" %c", &user_answer);
                user_answer = toupper(user_answer);

                if (user_answer == answers[i])
                {
                    score++;
                }  
            }
            printf("\n==================\n");
            printf("    Your score = %d\n", score);
            printf("====================\n");
            break;
        }
        default:
            break;
        }
  
    } while (choice != 3);
    
    return 0;
}