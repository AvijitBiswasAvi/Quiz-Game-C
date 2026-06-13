# Quiz Game in C

A simple menu-driven multiple-choice quiz game developed in the C programming language. The program tests the user's knowledge through a set of questions and calculates a final score based on correct answers.

## Features

- Multiple-choice questions (A, B, C, D)
- Case-insensitive input handling
- Score calculation system
- Menu-driven interface
- Rules section for user guidance
- Exit option with clean program termination

## How It Works

1. The user starts the program and sees a menu.
2. The user can choose to:
   - Start the quiz
   - View rules
   - Exit the game
3. In the quiz:
   - 5 questions are displayed one by one
   - Each question has 4 options
   - The user enters an answer (A/B/C/D)
   - Score is updated for each correct answer
4. Final score is displayed at the end of the quiz.

## Concepts Used

- Arrays (2D character arrays)
- Conditional statements (if-else, switch)
- Loops (do-while, for loop)
- Functions of standard library (`ctype.h`)
- Character input handling
- Basic program flow control

## Menu Options

1. Start Quiz – Begins the quiz
2. View Rules – Displays game instructions
3. Exit – Terminates the program

## Scoring System

- Each correct answer = +1 point
- Total score is displayed out of 5

## Example Output

Score format:
```
Your score = 4/5
```

## Future Improvements

- Add more questions
- Randomize question order
- Add difficulty levels
- Add timer for each question
- Store high scores
- Add replay option

## Author

Created as a beginner C programming project to practice arrays, loops, functions, and program design.
