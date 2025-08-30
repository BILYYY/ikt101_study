/*
 * C ARRAYS TUTORIAL - BEGINNERS GUIDE
 * Learning about arrays - storing multiple values of the same type
 */

#include <stdio.h>

// Using #define for constants (like a search-and-replace)
#define ARRAY_SIZE 10
#define CLASS_SIZE 5

int main(void) {

    /* ========== WHAT ARE ARRAYS? ========== */

    // A variable stores ONE value
    int single_number = 42;

    // An array stores MANY values of the same type
    // Think of it like a row of boxes, each holding a value

    printf("=== ARRAYS IN C ===\n");
    printf("Single variable: %d\n", single_number);

    /* ========== CREATING ARRAYS ========== */

    printf("\n--- Creating Arrays ---\n");

    // Syntax: data_type array_name[size];
    int numbers[5];              // Array of 5 integers (uninitialized - random values)
    int scores[5] = {0};         // Array of 5 integers, all initialized to 0
    int grades[4] = {85, 92, 78, 96};  // Array with specific values
    // int is data_type of the array elements (int, float, char, etc.)
    // float numbers[1] = {1.2};
    // Character arrays (strings)
    char name[20] = "Alice";     // Array of characters forming a string

    printf("Created arrays for numbers, scores, grades, and name\n");

    /* ========== ARRAY INDEXING (ZERO-BASED) ========== */

    printf("\n--- Array Indexing (Zero-Based) ---\n");

    // Arrays are ZERO-INDEXED: first element is at index 0
    // For array of size 5: valid indexes are 0, 1, 2, 3, 4

    printf("Array indexes and values:\n");
    printf("Index:  0   1   2   3\n");
    printf("Value: %2d  %2d  %2d  %2d\n", grades[0], grades[1], grades[2], grades[3]);

    // Accessing individual elements
    printf("\nFirst grade (index 0): %d\n", grades[0]);
    printf("Second grade (index 1): %d\n", grades[1]);
    printf("Last grade (index 3): %d\n", grades[3]);

    /* ========== SETTING AND READING ARRAY VALUES ========== */

    printf("\n--- Setting and Reading Values ---\n");

    // Setting values using index
    numbers[0] = 10;    // First element
    numbers[1] = 20;    // Second element
    numbers[2] = 30;    // Third element
    numbers[3] = 40;    // Fourth element
    numbers[4] = 50;    // Fifth element (last valid index)

    printf("Set numbers array values:\n");
    printf("numbers[0] = %d\n", numbers[0]);
    printf("numbers[1] = %d\n", numbers[1]);
    printf("numbers[2] = %d\n", numbers[2]);
    printf("numbers[3] = %d\n", numbers[3]);
    printf("numbers[4] = %d\n", numbers[4]);

    /* ========== USING LOOPS WITH ARRAYS ========== */

    printf("\n--- Using Loops with Arrays ---\n");

    // Arrays and loops work perfectly together
    int test_scores[CLASS_SIZE];

    // Fill array using a for loop
    printf("Filling array with loop (i * 10):\n");
    for (int i = 0; i < CLASS_SIZE; i++) {
        test_scores[i] = i * 10;
        printf("test_scores[%d] = %d\n", i, test_scores[i]);
    }

    // Read array using a for loop
    printf("\nReading array with loop:\n");
    for (int i = 0; i < CLASS_SIZE; i++) {
        printf("Score %d: %d\n", i + 1, test_scores[i]);
    }

    /* ========== ARRAY INITIALIZATION METHODS ========== */

    printf("\n--- Array Initialization ---\n");

    // Different ways to initialize arrays
    int method1[3] = {10, 20, 30};        // Specific values
    int method2[3] = {0};                 // All elements to 0
    int method3[3] = {5, 0, 0};          // First element 5, rest 0
    int method4[] = {1, 2, 3, 4, 5};     // Size determined by number of elements

    printf("method1: %d, %d, %d\n", method1[0], method1[1], method1[2]);
    printf("method2 (all zeros): %d, %d, %d\n", method2[0], method2[1], method2[2]);
    printf("method4 size is 5, last element: %d\n", method4[4]);

    /* ========== USING #DEFINE WITH ARRAYS ========== */

    printf("\n--- Using #define Constants ---\n");

    // #define creates constants - like search and replace
    int student_grades[ARRAY_SIZE] = {0};  // ARRAY_SIZE becomes 10

    printf("Created array of size %d using #define\n", ARRAY_SIZE);

    // Fill with values using the constant
    for (int i = 0; i < ARRAY_SIZE; i++) {
        student_grades[i] = i + 2;  // Values: 2, 3, 4, 5, 6, 7, 8, 9, 10, 11
    }

    printf("Array values: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", student_grades[i]);
    }
    printf("\n");

    // Questions from PDF:
    printf("\nAnswering PDF questions:\n");
    printf("Q1: student_grades[5] = %d\n", student_grades[5]);  // Should be 7
    // printf("Q2: student_grades[10] would be OUT OF BOUNDS! (undefined behavior)\n");

    /* ========== SIZEOF() OPERATOR ========== */

    printf("\n--- Using sizeof() ---\n");

    // sizeof() returns size in bytes
    int data[20] = {0};

    printf("sizeof(int) = %zu bytes\n", sizeof(int));
    printf("sizeof(data) = %zu bytes\n", sizeof(data));  // 20 * 4 = 80 bytes
    printf("Number of elements = %zu\n", sizeof(data) / sizeof(int));  // 80 / 4 = 20

    /* ========== ARRAY BOUNDS AND SAFETY ========== */

    printf("\n--- Array Bounds (IMPORTANT!) ---\n");

    int safe_array[3] = {100, 200, 300};

    printf("Valid array access:\n");
    printf("safe_array[0] = %d (VALID)\n", safe_array[0]);
    printf("safe_array[1] = %d (VALID)\n", safe_array[1]);
    printf("safe_array[2] = %d (VALID)\n", safe_array[2]);

    printf("\nDangerous array access (commented out):\n");
    printf("// safe_array[3] would be OUT OF BOUNDS!\n");
    printf("// safe_array[-1] would be OUT OF BOUNDS!\n");
    printf("// These cause undefined behavior and can crash your program!\n");

    /* ========== PRACTICAL ARRAY EXAMPLES ========== */

    printf("\n--- Practical Examples ---\n");

    // Example 1: Finding the maximum value
    int values[6] = {15, 8, 23, 4, 16, 42};
    int max_value = values[0];  // Start with first element

    for (int i = 1; i < 6; i++) {
        if (values[i] > max_value) {
            max_value = values[i];
        }
    }
    printf("Maximum value in array: %d\n", max_value);

    // Example 2: Calculating average
    int quiz_scores[4] = {85, 92, 78, 88};
    int total = 0;

    for (int i = 0; i < 4; i++) {
        total += quiz_scores[i];
    }
    float average = total / 4.0;
    printf("Quiz scores average: %.1f\n", average);

    // Example 3: Counting specific values
    int survey_responses[10] = {1, 3, 2, 1, 2, 3, 1, 2, 1, 3};
    int count_ones = 0;

    for (int i = 0; i < 10; i++) {
        if (survey_responses[i] == 1) {
            count_ones++;
        }
    }
    printf("Number of '1' responses: %d\n", count_ones);

    /* ========== EXERCISE SECTION ========== */

    printf("\n=== EXERCISES ===\n");

    /* EXERCISE 1: Temperature Tracker
     * Create an array to store 7 daily temperatures (float)
     * Use scanf to let user input each day's temperature
     * Calculate and display:
     * - Average temperature for the week
     * - Highest temperature
     * - Lowest temperature
     * - How many days were above average
     */

    /* EXERCISE 2: Student Grade Manager
     * Create an array for 5 student test scores (int)
     * Fill the array with values using a loop and scanf
     * Display all scores in a formatted table
     * Calculate letter grades for each score:
     * 90+: A, 80-89: B, 70-79: C, 60-69: D, <60: F
     * Count how many of each letter grade
     */


    printf("Try these exercises to master arrays!\n");
    printf("Remember: Arrays are zero-indexed, watch your bounds!\n");
    printf("Array[size] has valid indexes from 0 to size-1\n");

    return 0;
}