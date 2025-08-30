/*
 * C FUNCTIONS TUTORIAL - BEGINNERS GUIDE
 * Learning about functions - reusable pieces of code
 */

#include <stdio.h>

// Function declarations (prototypes) - tell compiler what functions exist
int add_numbers(int a, int b);
void print_greeting(void);
float calculate_area(float length, float width);
void print_array(int numbers[], int size);
int find_maximum(int array[], int size);

int main(void) {

    /* ========== WHAT ARE FUNCTIONS? ========== */

    // Functions are named pieces of code that can be reused
    // Think of them like recipes - you write the recipe once, use it many times
    // main(), printf(), and scanf() are all functions!

    printf("=== FUNCTIONS IN C ===\n");

    // You've already been using functions!
    printf("This is the printf() function!\n");  // printf is a function

    /* ========== FUNCTION TERMINOLOGY ========== */

    printf("\n--- Function Terminology ---\n");

    // CALLING a function = running the code inside the function
    // RETURN VALUE = the result the function gives back
    // PARAMETERS/ARGUMENTS = values you give to the function

    // Example: Calling our custom function
    int result = add_numbers(5, 3);  // Calling add_numbers function
    printf("5 + 3 = %d (returned from function)\n", result);

    /* ========== BASIC FUNCTION SYNTAX ========== */

    printf("\n--- Function Structure ---\n");

    // Function syntax: returnType functionName(parameters) { body }
    // returnType: what type of value the function returns (int, float, void)
    // functionName: what you call the function
    // parameters: inputs the function needs
    // body: the code that runs when function is called

    print_greeting();  // This function returns nothing (void)

    /* ========== FUNCTIONS WITH PARAMETERS ========== */

    printf("\n--- Functions with Parameters ---\n");

    // Parameters are like variables that get their values when you call the function
    int sum1 = add_numbers(10, 20);
    int sum2 = add_numbers(7, 13);
    int sum3 = add_numbers(100, 200);

    printf("10 + 20 = %d\n", sum1);
    printf("7 + 13 = %d\n", sum2);
    printf("100 + 200 = %d\n", sum3);

    // Different parameter types
    float area = calculate_area(5.5, 3.2);
    printf("Rectangle area (5.5 x 3.2): %.2f\n", area);

    /* ========== FUNCTIONS WITH DIFFERENT RETURN TYPES ========== */

    printf("\n--- Different Return Types ---\n");

    // void functions - do something but don't return a value
    print_greeting();

    // int functions - return whole numbers
    int my_sum = add_numbers(15, 25);
    printf("Sum: %d\n", my_sum);

    // float functions - return decimal numbers
    float my_area = calculate_area(4.0, 6.0);
    printf("Area: %.1f\n", my_area);

    /* ========== PASSING VARIABLES BY COPY ========== */

    printf("\n--- Pass by Copy (Variables) ---\n");

    // When you pass variables to functions, they are COPIED
    // Changing the parameter inside the function doesn't change the original
    int original_number = 42;

    printf("Before function call: %d\n", original_number);
    test_copy_function(original_number);  // This won't change original_number
    printf("After function call: %d\n", original_number);  // Still 42!

    /* ========== PASSING ARRAYS BY REFERENCE ========== */

    printf("\n--- Pass by Reference (Arrays) ---\n");

    // Arrays are passed by REFERENCE - function can modify the original
    int my_numbers[] = {1, 2, 3, 4, 5};

    printf("Array contents:\n");
    print_array(my_numbers, 5);

    // Finding maximum value
    int max_value = find_maximum(my_numbers, 5);
    printf("Maximum value: %d\n", max_value);

    /* ========== PRACTICAL FUNCTION EXAMPLES ========== */

    printf("\n--- Practical Examples ---\n");

    // Temperature conversion
    float celsius = 25.0;
    float fahrenheit = celsius_to_fahrenheit(celsius);
    printf("%.1f°C = %.1f°F\n", celsius, fahrenheit);

    // Grade calculator
    int scores[] = {85, 92, 78, 96, 88};
    float average = calculate_average(scores, 5);
    printf("Test average: %.1f\n", average);

    // Check if number is even
    int test_num = 24;
    if (is_even(test_num)) {
        printf("%d is even\n", test_num);
    } else {
        printf("%d is odd\n", test_num);
    }

    /* ========== THE SPECIAL MAIN FUNCTION ========== */

    printf("\n--- About main() Function ---\n");

    // main() is special - it's where your program starts
    // The operating system calls main() to run your program
    // It must return int: 0 = success, non-zero = error

    printf("main() is the entry point of every C program\n");
    printf("Operating system calls main() to start your code\n");

    /* ========== FUNCTION LIBRARIES ========== */

    printf("\n--- Using Library Functions ---\n");

    // We've been using the C Standard Library
    // printf() and scanf() come from stdio.h
    // Libraries are collections of useful functions

    printf("printf() comes from the stdio.h library\n");
    printf("Libraries save us from writing everything from scratch\n");

    /* ========== EXERCISE SECTION ========== */

    printf("\n=== EXERCISES ===\n");

    /* EXERCISE 1: Basic Math Functions
     * Write these functions:
     * - int multiply(int a, int b) - returns a * b
     * - int subtract(int a, int b) - returns a - b
     * - float divide(float a, float b) - returns a / b (check for division by zero!)
     * 
     * Test them with different values and print results
     */

    /* EXERCISE 2: String and Character Functions
     * Write these functions:
     * - void print_stars(int count) - prints count number of stars
     * - int count_vowels(char text[]) - counts vowels (a,e,i,o,u) in text
     * - void print_backwards(char text[]) - prints string in reverse
     * 
     * Test with user input using scanf
     */

    /* EXERCISE 3: Array Processing Functions
     * Write these functions:
     * - int sum_array(int arr[], int size) - returns sum of all elements
     * - int find_minimum(int arr[], int size) - returns smallest value
     * - void double_array(int arr[], int size) - multiplies each element by 2
     * - int search_array(int arr[], int size, int target) - returns index of target, -1 if not found
     * 
     * Create arrays, fill with values, and test all functions
     */

    printf("Try these exercises to master functions!\n");
    printf("Remember: functions make code reusable and organized!\n");

    return 0;  // Return 0 to OS indicating success
}

/* ========== FUNCTION DEFINITIONS ========== */

// Function that adds two numbers and returns the result
int add_numbers(int a, int b) {
    return a + b;  // Return the sum
}

// Function that prints a greeting (returns nothing - void)
void print_greeting(void) {
    printf("Hello from a custom function!\n");
}

// Function that calculates rectangle area
float calculate_area(float length, float width) {
    return length * width;
}

// Function that prints array contents
void print_array(int numbers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
}

// Function that finds maximum value in array
int find_maximum(int array[], int size) {
    int max = array[0];  // Start with first element
    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

// Function to demonstrate pass by copy
void test_copy_function(int number) {
    number++;  // This only changes the copy, not the original
    printf("Inside function: %d\n", number);
}

// Temperature conversion function
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

// Calculate average of test scores
float calculate_average(int scores[], int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += scores[i];
    }
    return total / (float)count;  // Cast to float for decimal result
}

// Check if number is even
int is_even(int number) {
    return (number % 2 == 0);  // Returns 1 if even, 0 if odd
}