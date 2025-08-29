/*
 * C OUTPUT TUTORIAL - PRINTF BASICS FOR BEGINNERS
 * Just starting to learn printf() - no loops, no advanced concepts
 */

#include <stdio.h>

int main(void) {

    /* ========== PRINTF BASICS ========== */

    // printf() displays text to the console
    // Basic syntax: printf("text to display");
    printf("Hello, World!\n");
    printf("This is a simple message\n");
    printf("I am learning C programming\n");

    /* ========== DISPLAYING NUMBERS ========== */

    // You can display numbers directly
    printf("The number is: 42\n");
    printf("My age is: 20\n");
    printf("Price: 15.99\n");

    /* ========== USING VARIABLES WITH PRINTF ========== */

    // First declare variables, then use them in printf
    int age = 25;
    int score = 95;

    printf("My age is: %d\n", age);        // %d for integers
    printf("My score is: %d\n", score);

    // Floating point numbers (decimals)
    float height = 175.5;
    float price = 29.99;

    printf("My height is: %f\n", height);  // %f for decimals
    printf("The price is: %f\n", price);

    /* ========== FORMAT SPECIFIERS ========== */

    // %d - for integers (whole numbers)
    // %f - for floating point numbers (decimals)
    // %c - for single characters
    // %s - for strings (text)

    int number = 100;
    float decimal = 3.14;
    char letter = 'A';
    char name[] = "Alice";

    printf("Integer: %d\n", number);
    printf("Decimal: %f\n", decimal);
    printf("Letter: %c\n", letter);
    printf("Name: %s\n", name);

    /* ========== CONTROLLING DECIMAL PLACES ========== */

    float pi = 3.14159;

    printf("Pi with default decimals: %f\n", pi);      //3.14159 Shows many decimal places
    printf("Pi with 2 decimals: %.2f\n", pi);         //3.14 Shows only 2 decimal places
    printf("Pi with 1 decimal: %.1f\n", pi);          //3.1 Shows only 1 decimal place
    printf("Pi with no decimals: %.0f\n", pi);        //3 Shows no decimal places

    /* ========== MULTIPLE VALUES IN ONE PRINTF ========== */

    char student_name[] = "John";
    int student_age = 18;
    float student_grade = 87.5;

    // You can display multiple values in one printf
    printf("Student: %s, Age: %d, Grade: %.1f\n", student_name, student_age, student_grade);

    /* ========== SPECIAL CHARACTERS ========== */

    // \n means "new line" (go to next line)
    printf("First line\nSecond line\n");

    // \t means "tab" (add spaces)
    printf("Name:\tJohn\n");
    printf("Age:\t25\n");

    // To print quotation marks, use \"
    printf("He said \"Hello there!\"\n");

    // To print a percent sign, use %%
    printf("I scored 90%% on the test\n");

    /* ========== SIMPLE EXAMPLES ========== */

    printf("\n--- Simple Examples ---\n");

    // Personal information
    char my_name[] = "Sarah";
    int my_age = 22;
    char my_grade = 'A';
    float my_height = 165.0;

    printf("My name is: %s\n", my_name);
    printf("I am %d years old\n", my_age);
    printf("My grade is: %c\n", my_grade);
    printf("I am %.1f cm tall\n", my_height);

    // Simple math results - printf can do calculations!
    printf("5 + 3 = %d\n", 5 + 3);        // Addition
    printf("10 - 4 = %d\n", 10 - 4);      // Subtraction
    printf("6 * 7 = %d\n", 6 * 7);        // Multiplication
    printf("15 / 3 = %d\n", 15 / 3);      // Division

    // You can also use variables in calculations
    int num1 = 20;
    int num2 = 5;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);

    // Simple receipt
    printf("\n--- Simple Receipt ---\n");
    printf("Item: Apple\n");
    printf("Price: $1.50\n");
    printf("Quantity: 3\n");
    printf("Total: $4.50\n");

    /* ========== EXERCISE SECTION ========== */

    printf("\n=== EXERCISES ===\n");

    /* EXERCISE : About Me
     * Create variables for:
     * - Your name (string)
     * - Your age (integer)
     * - Your favorite number (integer)
     * - Your height in cm (float)
     *
     * Use printf to display all this information nicely
     * Example:
     * My name is: [your name]
     * I am [age] years old
     * My favorite number is: [number]
     * I am [height] cm tall
     */

    printf("Try these exercises to practice printf!\n");
    printf("Remember: %%d for integers, %%f for decimals, %%s for text, %%c for single letters\n");

    return 0;
}