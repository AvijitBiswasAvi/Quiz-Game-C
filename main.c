#include <stdio.h>
#include <ctype.h>

int main()
{
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
                    "What was Musashi's ture name ?"};

            char options[5][4][50] =
                {
                    {"Monkey D. Luffy", "Zoro", "Nami", "Sanji"},
                    {"5 billion", "10 billion", "15 billion", "20 billion"},
                    {"Yeager", "Blutooth", "Ackerman", "Macron"},
                    {"Winterfell", "Kings Landing", "Miklagard", "Land of Dawn"},
                    {"Aegon Targeriyan", "Takejo", "Dr. stone", "Dark King"}};

            char answers[5] = {'A', 'B', 'C', 'C', 'B'};

            for (int i = 0; i < 5; i++)
            {
                printf("\n%s\n", questions[i]);

                printf("\nA. %s\n", options[i][0]);
                printf("B. %s\n", options[i][1]);
                printf("C. %s\n", options[i][2]);
                printf("D. %s\n", options[i][3]);

                printf("Enter your answer(A/B/C/D) = ");
                scanf(" %c", &user_answer);
                user_answer = toupper(user_answer);

                if (user_answer == answers[i])
                {
                    score++;
                }
            }
            printf("\n========================\n");
            printf("    Your score = %d/5\n", score);
            printf("========================\n");
            break;
        }
        case 2:
        {
            printf("\n================ RULES ================\n\n");
            printf("1. Multiple choice questions will be given.\n");
            printf("2. Each question has four options (A, B, C, D).\n");
            printf("3. Enter your answer using A, B, C, or D only.\n");
            printf("4. Each correct answer gives +1 score.\n");
            printf("5. Wrong answers give 0 score.\n");
            printf("6. Final score will be displayed at the end.\n\n");
            printf("Good luck!\n");
            printf("=======================================\n");
            break;
        }
        default:
        {
            printf("----Invalid Choice----");
        }
        break;
        }

    } while (choice != 3);
    printf("\n========================\n");
    printf("    TNX for playing \n");
    printf("========================\n");

    return 0;
}