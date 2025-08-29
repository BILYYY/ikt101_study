/*
 * C FLOW CONTROL TUTORIAL - BEGINNERS GUIDE
 * Learning about if statements, loops, and switch statements
 */

#include <stdio.h>

int main(void) {

    /* ========== WHAT IS FLOW CONTROL? ========== */

    // Flow control lets us change how our program runs
    // Instead of just running line by line, we can:
    // - Skip over code (if statements)
    // - Repeat code (loops)
    // - Make decisions based on conditions

    printf("=== FLOW CONTROL IN C ===\n");

    /* ========== IF STATEMENTS ========== */

    // if statements let us run code only when a condition is true
    // Basic syntax: if (condition) { code }
    int age;

    printf("\n--- If Statement Examples ---\n");
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Age: %d\n", age);

    if (age >= 18) {
        printf("You are an adult!\n");
    }

    if (age < 18) {
        printf("You are a minor\n");
    }

    /* ========== COMPARISON OPERATORS ========== */

    printf("\n--- Comparison Operators ---\n");

    int score ;
    printf("Enter ur score : ");
    scanf("%d", &score);
    printf("ur score : %d\n", score);

    // == (equals) - checks if two values are the same
    if (score == 100) {
        printf("Perfect score!\n");
    }

    // != (not equal) - checks if two values are different
    if (score != 0) {
        printf("You didn't get zero\n");
    }

    // > (greater than)
    if (score > 80) {
        printf("Great job! Score above 80\n");
    }

    // < (less than)
    if (score < 60) {
        printf("Need to study more\n");
    }

    // >= (greater than or equal)
    if (score >= 70 && score <= 80) {
        printf("You passed!\n");
    }

    // <= (less than or equal)
    if (score <= 90) {
        printf("Room for improvement\n");
    }

    /* ========== IF-ELSE STATEMENTS ========== */

    printf("\n--- If-Else Examples ---\n");

    int aage;
    printf("enter ur age :\n", aage);
    scanf("%d", &aage);

    if (aage > 18) {
        printf("You are an adult!\n");
    } else {
        printf("ur an minor\n");
    }

    /* ========== IF-ELSE IF-ELSE CHAIN ========== */

    printf("\n--- Multiple Conditions ---\n");

    char grade_letter;
    int test_score ;
    printf("Enter your test score : ");
    scanf("%d", &test_score);
    printf("Test score: %d\n", test_score);

    if (test_score >= 90) {
        grade_letter = 'A';
        printf("Excellent! Grade: %c\n", grade_letter);
    } else if (test_score >= 80) {
        grade_letter = 'B';
        printf("Good job! Grade: %c\n", grade_letter);
    } else if (test_score >= 70) {
        grade_letter = 'C';
        printf("Average. Grade: %c\n", grade_letter);
    } else if (test_score >= 60) {
        grade_letter = 'D';
        printf("Below average. Grade: %c\n", grade_letter);
    } else {
        grade_letter = 'F';
        printf("Failed. Grade: %c\n", grade_letter);
    }

    /* ========== LOGICAL OPERATORS ========== */

    printf("\n--- Logical Operators ---\n");

    int student_age ;
    int student_grade ;

    printf("Enter your age : ");
    scanf("%d", &student_age);
    printf("Enter your grade : ");
    scanf("%d", &student_grade);
    printf("Student age: %d, grade: %d\n", student_age, student_grade);

    // && (AND) - both conditions must be true
    if (student_age >= 18 && student_grade >= 80) {
        printf("Eligible for scholarship (adult AND good grades)\n");
    }

    // || (OR) - at least one condition must be true  
    if (student_age < 18 || student_grade >= 90) {
        printf("Special consideration (young OR excellent grades)\n");
    }

    // Complex conditions with parentheses
    if ((student_age >= 18 && student_grade >= 70) || student_grade >= 95) {
        printf("Can take advanced course\n");
    }

    /* ========== WHILE LOOPS ========== */

    printf("\n--- While Loop Examples ---\n");

    // while loops repeat code while a condition is true
    // Syntax: while (condition) { code }

    int count = 1;
    printf("Counting from 1 to 5:\n");
    while (count <= 5) {
        printf("Count: %d\n", count);
        count++;  // Increase count by 1 each time
    }

    /* ========== FOR LOOPS ========== */

    printf("\n--- For Loop Examples ---\n");

    // for loops are perfect for counting
    // Syntax: for (start; condition; increment) { code }

    printf("Numbers 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Even numbers from 2 to 20:\n");
    for (int i = 2; i <= 20; i = i + 2) {
        printf("%d ", i);
    }
    printf("\n");

    printf("Countdown from 5:\n");
    for (int i = 5; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\nBlast off!\n");

    /* ========== SWITCH STATEMENTS ========== */

    printf("\n--- Switch Statement Examples ---\n");

    // switch statements handle multiple specific values
    // Great for menus and choices

    int menu_choice ;
    printf("Enter your choice: ");
    scanf("%d", &menu_choice);
    printf("Menu choice: %d\n", menu_choice);

    switch (menu_choice) {
        case 1:
            printf("You chose Pizza\n");
            break;  // break is important! Stops the switch
        case 2:
            printf("You chose Burger\n");
            break;
        case 3:
            printf("You chose Salad\n");
            break;
        default:  // default runs if no case matches
            printf("Invalid choice\n");
            break;
    }

    // Switch with characters
    char day_code ;
    printf("Enter your day code: ");
    scanf("%c", &day_code);
    printf("Day code: %c\n", day_code);

    switch (day_code) {
        case 'M':
            printf("Monday\n");
            break;
        case 'T':
            printf("Tuesday\n");
            break;
        case 'W':
            printf("Wednesday\n");
            break;
        case 'F':
            printf("Friday\n");
            break;
        default:
            printf("Unknown day\n");
            break;
    }

    /* ========== PRACTICAL EXAMPLES ========== */

    printf("\n--- Practical Examples ---\n");

    // Simple calculator using switch
    int num1 , num2 ;
    char operation ;
    printf("Enter two numbers and an operation: like 10 + 5 or 10 - 5: ");
    scanf("%d %c %d", &num1, &operation, &num2);
    printf("Calculation: %d %c %d = ", num1, operation, num2);

    switch (operation) {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2f\n", (float)num1 / num2);
            } else {
                printf("Cannot divide by zero!\n");
            }
            break;
        default:
            printf("Unknown operation\n");
            break;
    }

    // Finding the largest number
    int a = 15, b = 8, c = 23;
    int largest;

    printf("Numbers: %d, %d, %d\n", a, b, c);

    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    printf("Largest number: %d\n", largest);

    /* ========== EXERCISE SECTION ========== */

    printf("\n=== EXERCISES ===\n");

    /* EXERCISE 1: Age Category Classifier
     * Ask user for their age using scanf
     * Use if-else if-else to classify them:
     * - 0-12: Child
     * - 13-17: Teenager  
     * - 18-64: Adult
     * - 65+: Senior
     * Print their category
     */

    /* EXERCISE 2: Simple Calculator with Menu
     * Show a menu with options:
     * 1. Addition
     * 2. Subtraction
     * 3. Multiplication
     * 4. Division
     * 
     * Use scanf to get user choice and two numbers
     * Use switch statement to perform the operation
     * Handle division by zero error
     */

    /* EXERCISE 3: Number Guessing Game
     * Set a secret number (like 7)
     * Use a while loop to keep asking user to guess
     * Give hints: "Too high" or "Too low"
     * When they guess correctly, congratulate them
     * Count how many guesses it took
     * 
     * Bonus: Use a for loop to limit guesses to 5 attempts
     */

    printf("Try these exercises to master flow control!\n");
    printf("Remember: if for decisions, loops for repetition, switch for multiple choices\n");

    return 0;
}