
#include <stdio.h>

int main(void) {

    /* ========== DATA TYPES IN C ========== */

    // Data types tell the computer what kind of data to store
    // Each type takes different amounts of memory

    /* ========== INTEGER DATA TYPES ========== */

    // int - stores whole numbers (positive, negative, or zero)
    //size of int is 4 bytes on 32-bit systems and 8 bytes on 64-bit systems
    //int can store numbers from -2 billion to +2 billion
    int age = 25;
    int temperature = -10;
    int score = 0;

    printf("--- Integer Examples ---\n");
    printf("Age: %d\n", age);
    printf("Temperature: %d degrees\n", temperature);
    printf("Score: %d\n", score);

    /* ========== FLOATING POINT DATA TYPES ========== */

    // float - stores decimal numbers (numbers with decimal points)
    //size of float is 4 bytes on 32-bit systems and 8 bytes on 64-bit systems
    //float can store numbers with 6-7 decimal places
    float height = 175.5;
    float price = 29.99;
    float pi = 3.14159;

    printf("\n--- Float Examples ---\n");
    printf("Height: %.1f cm\n", height);
    printf("Price: $%.2f\n", price);
    printf("Pi: %.5f\n", pi);

    // double - stores decimal numbers with more precision (more decimal places)
    //size of double is 8 bytes on 32-bit systems and 16 bytes on 64-bit systems
    //double can store numbers with 15 decimal places
    double very_precise = 3.141592653589793;
    double big_number = 1234567.123456789;

    printf("\n--- Double Examples ---\n");
    printf("Very precise pi: %.15lf\n", very_precise);  // Use %lf for double
    printf("Big number: %.6lf\n", big_number);

    /* ========== CHARACTER DATA TYPE ========== */

    // char - stores single characters (letters, numbers, symbols)
    //size of char is 1 byte on 32-bit systems and 2 bytes on 64-bit systems
    //char can store any single character
    char grade = 'A';
    char initial = 'J';
    char symbol = '@';
    char digit = '5';  // This is the character '5', not the number 5

    printf("\n--- Character Examples ---\n");
    printf("Grade: %c\n", grade);
    printf("Initial: %c\n", initial);
    printf("Symbol: %c\n", symbol);
    printf("Digit character: %c\n", digit);

    /* ========== STRING DATA TYPE ========== */

    // char[] - stores text (multiple characters together)
    //size of char[] is variable, depending on the text
    //char[] can store any text
    //char[] is used for strings, but it's not the same as a string in Python'
    char name[] = "Alice";
    char city[] = "New York";
    char message[] = "Hello World!";

    printf("\n--- String Examples ---\n");
    printf("Name: %s\n", name);
    printf("City: %s\n", city);
    printf("Message: %s\n", message);


    /* ========== ARITHMETIC OPERATORS ========== */

    printf("\n=== ARITHMETIC OPERATIONS ===\n");

    int a = 20;
    int b = 6;

    printf("First number: %d\n", a);
    printf("Second number: %d\n", b);

    // Addition (+)
    printf("%d + %d = %d\n", a, b, a + b);

    // Subtraction (-)
    printf("%d - %d = %d\n", a, b, a - b);

    // Multiplication (*)
    printf("%d * %d = %d\n", a, b, a * b);

    // Division (/)
    printf("%d / %d = %d\n", a, b, a / b);  // Integer division (no decimals)

    // Modulus (%) - remainder after division
    printf("%d %% %d = %d\n", a, b, a % b); // %% to print actual % symbol

    /* ========== FLOATING POINT ARITHMETIC ========== */

    printf("\n--- Decimal Number Math ---\n");

    float x = 15.5;
    float y = 4.2;

    printf("First decimal: %.1f\n", x);
    printf("Second decimal: %.1f\n", y);

    printf("%.1f + %.1f = %.1f\n", x, y, x + y);
    printf("%.1f - %.1f = %.1f\n", x, y, x - y);
    printf("%.1f * %.1f = %.1f\n", x, y, x * y);
    printf("%.1f / %.1f = %.1f\n", x, y, x / y);

    /* ========== INTEGER VS FLOATING POINT DIVISION ========== */

    printf("\n--- Division Differences ---\n");

    int int1 = 7, int2 = 2;
    float float1 = 7.0, float2 = 2.0;

    printf("Integer division: %d / %d = %d\n", int1, int2, int1 / int2);      // Result: 3
    printf("Float division: %.1f / %.1f = %.1f\n", float1, float2, float1 / float2);  // Result: 3.5

    /* ========== MIXING DATA TYPES ========== */

    printf("\n--- Mixing Different Types ---\n");

    int whole = 10;
    float decimal = 3.0;

    printf("Integer %d + Float %.1f = %.1f\n", whole, decimal, whole + decimal);
    // When you mix int and float, result becomes float

    /* ========== OPERATOR PRECEDENCE ========== */

    printf("\n--- Order of Operations ---\n");

    int result1 = 5 + 3 * 2;        // Multiplication first: 5 + (3 * 2) = 5 + 6 = 11
    int result2 = (5 + 3) * 2;      // Parentheses first: (5 + 3) * 2 = 8 * 2 = 16

    printf("5 + 3 * 2 = %d\n", result1);
    printf("(5 + 3) * 2 = %d\n", result2);
    printf("Order: () first, then * /, then + -\n");

    /* ========== PRACTICAL EXAMPLES ========== */

    printf("\n--- Practical Examples ---\n");

    // Area of rectangle
    int length = 12;
    int width = 8;
    int area = length * width;
    printf("Rectangle %d x %d has area: %d\n", length, width, area);

    // Temperature conversion (Celsius to Fahrenheit)
    float celsius = 25.0;
    float fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    printf("%.1f°C = %.1f°F\n", celsius, fahrenheit);

    // Average calculation
    int test1 = 85, test2 = 90, test3 = 78;
    float average = (test1 + test2 + test3) / 3.0;  // Divide by 3.0 to get decimal result
    printf("Test scores: %d, %d, %d\n", test1, test2, test3);
    printf("Average: %.1f\n", average);

    /* ========== EXERCISE SECTION ========== */

    printf("\n=== EXERCISES ===\n");

    /* EXERCISE 1: Personal Calculator
     * Create variables for:
     * - Your birth year (int)
     * - Current year (int)
     * - Your height in meters (float)
     * - Your weight in kg (float)
     *
     * Calculate and display:
     * - Your age (current year - birth year)
     * - Your BMI (weight / (height * height))
     * Use appropriate data types and show results with proper formatting
     */

    /* EXERCISE 2: Shopping Calculator
     * Create variables for:
     * - Item name (string)
     * - Price per item (float)
     * - Quantity bought (int)
     * - Tax rate as percentage (float, like 8.5 for 8.5%)
     *
     * Calculate and display:
     * - Subtotal (price * quantity)
     * - Tax amount (subtotal * tax_rate / 100)
     * - Final total (subtotal + tax)
     * Format money to 2 decimal places
     */



    printf("Try these exercises to practice data types and arithmetic!\n");
    printf("Remember: int for whole numbers, float for decimals, char for letters, char[] for text\n");

    return 0;
}