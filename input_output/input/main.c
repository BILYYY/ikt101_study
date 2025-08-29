/*
 * C INPUT TUTORIAL - SCANF BASICS FOR BEGINNERS
 * Just starting to learn scanf() - taking input from user
 */

#include <stdio.h>

int main(void) {

    /* ========== SCANF BASICS ========== */

    // scanf() reads input from the keyboard
    // Basic syntax: scanf("format", &variable);
    // IMPORTANT: Don't forget the & before variable names!

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);                    // Read an integer
    printf("You are %d years old\n", age);

    /* ========== READING DIFFERENT DATA TYPES ========== */

    // Reading an integer
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);                 // %d for integers, & is required
    printf("You entered: %d\n", number);

    // Reading a float (decimal number)
    float height;
    printf("Enter your height: ");
    scanf("%f", &height);                 // %f for floats, & is required
    printf("Your height is: %.1f\n", height);

    // Reading a single character
    char grade;
    printf("Enter your grade (A, B, C, etc.): ");
    scanf(" %c", &grade);                 // %c for characters, & is required
    printf("Your grade is: %c\n", grade); // NOTE: Space before %c is important!

    /* ========== READING STRINGS ========== */

    // Reading a string (text)
    char name[50];                        // Create space for 50 characters
    printf("Enter your name: ");
    scanf("%s", name);                    // %s for strings, NO & needed for strings!
    printf("Hello, %s!\n", name);

    /* ========== SCANF FORMAT SPECIFIERS ========== */

    // %d - for integers (whole numbers)
    // %f - for floating point numbers (decimals)
    // %c - for single characters
    // %s - for strings (text) - NOTE: No & needed for strings!

    int student_id;
    float test_score;
    char letter_grade;
    char student_name[30];

    printf("\n--- Student Information ---\n");
    printf("Enter student ID: ");
    scanf("%d", &student_id);

    printf("Enter student name: ");
    scanf("%s", student_name);            // No & for strings!

    printf("Enter test score: ");
    scanf("%f", &test_score);

    printf("Enter letter grade: ");
    scanf(" %c", &letter_grade);          // Space before %c!

    printf("\n--- Student Report ---\n");
    printf("ID: %d\n", student_id);
    printf("Name: %s\n", student_name);
    printf("Score: %.1f\n", test_score);
    printf("Grade: %c\n", letter_grade);

    /* ========== READING MULTIPLE VALUES AT ONCE ========== */

    int day, month, year;
    printf("Enter your birth date (day month year): ");
    scanf("%d %d %d", &day, &month, &year);  // Read 3 integers separated by spaces
    printf("You were born on: %d/%d/%d\n", day, month, year);

    /* ========== IMPORTANT SCANF RULES ========== */

    // 1. ALWAYS use & before variable names (except strings)
    //    scanf("%d", &number);    ← Correct
    //    scanf("%d", number);     ← Wrong!
    //    scanf("%s", name);       ← Correct (no & for strings)

    // 2. Use space before %c when reading characters:
    //    scanf(" %c", &character);   ← The space is very important!

    // 3. scanf stops reading strings at the first space
    //    If you enter "John Doe", it will only read "John"

    // 4. Match the format specifier with the variable type:
    //    int → %d
    //    float → %f  
    //    char → %c
    //    string → %s

    /* ========== SIMPLE INPUT EXAMPLES ========== */

    printf("\n--- Simple Examples ---\n");

    // Example 1: Basic calculator input
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("You entered: %d and %d\n", num1, num2);
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);

    // Example 2: Personal info
    char city[30];
    int birth_year;
    printf("Enter your city: ");
    scanf("%s", city);
    printf("Enter your birth year: ");
    scanf("%d", &birth_year);
    printf("You live in %s and were born in %d\n", city, birth_year);

    /* ========== EXERCISE SECTION ========== */

    printf("\n=== EXERCISES ===\n");

    /* EXERCISE 1: Personal Information Input
     * Ask the user to enter:
     * - Their first name (string)
     * - Their age (integer)
     * - Their height in cm (float)
     * - Their favorite letter (character)
     * 
     * Then display all the information back to them
     * Remember: & for numbers and characters, no & for strings
     */

    /* EXERCISE 2: Simple Store System
     * Ask the user to enter:
     * - Product name (string)
     * - Product price (float)
     * - Quantity to buy (integer)
     * 
     * Calculate and display:
     * - Total cost (price * quantity)
     * - Show a receipt with all information
     */


    printf("Try these exercises to practice scanf!\n");
    printf("Remember: & for variables, no & for strings, space before %%c\n");

    return 0;
}