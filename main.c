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

            int answers[5] = {0, 1, 2, 2, 1};

            
            break;
        
        default:
            break;
        }
  
    } while (choice != 3);
    
    return 0;
}