# C Programming Exercises

## Understanding Loops

### What is a Loop?

A loop is a programming structure that repeats a block of code multiple times. Instead of writing the same code over and over, we use loops to make our programs more efficient.

### For Loop Structure

```c
for (initialization; condition; increment) {
    // Code to repeat
}
```

**Three parts of a for loop:**

1. **Initialization**: Set starting value (runs once at the beginning)
2. **Condition**: Check if loop should continue (checked before each iteration)
3. **Increment**: Update the variable (runs after each iteration)

### Basic For Loop Examples

**Example 1: Count from 0 to 4**

```c
for (int i = 0; i < 5; i++) {
    printf("i = %d\n", i);
}
```

- `int i = 0` - Start with i equal to 0
- `i < 5` - Continue while i is less than 5
- `i++` - Add 1 to i after each loop (i++ means i = i + 1)

**Output:**

```
i = 0
i = 1
i = 2
i = 3
i = 4
```

**Example 2: Count from 1 to 10**

```c
for (int i = 1; i <= 10; i++) {
    printf("%d ", i);
}
```

**Output:** `1 2 3 4 5 6 7 8 9 10`

**Example 3: Count by 2s (even numbers)**

```c
for (int i = 0; i <= 10; i = i + 2) {
    printf("%d ", i);
}
// Or shorter: for (int i = 0; i <= 10; i += 2)
```

**Output:** `0 2 4 6 8 10`

**Example 4: Count backwards**

```c
for (int i = 10; i >= 1; i--) {
    printf("%d ", i);
}
```

**Output:** `10 9 8 7 6 5 4 3 2 1`

**Example 5: Skip by 3s**

```c
for (int i = 3; i <= 15; i = i + 3) {
    printf("%d ", i);
}
```

**Output:** `3 6 9 12 15`

**Example 6: Using multiplication**

```c
for (int i = 1; i <= 5; i++) {
    printf("%d ", i * 2);  // Print double of i
}
```

**Output:** `2 4 6 8 10`

### Understanding Nested Loops

### Single Loop Example

If you want to print numbers 1 to 5:

```c
for (int j = 1; j <= 5; j++) {
    printf("%d ", j);
}
// Output: 1 2 3 4 5
```

### Problem: Print the same pattern 5 times

**Option 1: Repeat the code 5 times (BAD)**

```c
// This is repetitive and inefficient
for (int j = 1; j <= 5; j++) {
    printf("%d ", j);
}
printf("\n");

for (int j = 1; j <= 5; j++) {
    printf("%d ", j);
}
printf("\n");

for (int j = 1; j <= 5; j++) {
    printf("%d ", j);
}
printf("\n");
// ... repeat 5 times total
```

**Option 2: Use Nested Loop (GOOD)**

```c
for (int i = 0; i < 5; i++) {        // Outer loop: controls rows
    for (int j = 1; j <= 3; j++) {   // Inner loop: prints numbers
        printf("%d ", j);
    }
    printf("\n");                    // New line after each row
}
output :
1 2 3 
1 2 3 
1 2 3 
1 2 3 
```

### How Nested Loops Work:

<img width="850" height="436" alt="image" src="https://github.com/user-attachments/assets/968ec2d8-e1d0-4e71-8680-6443b8917f02" />


**Key Points:**

- **i (outer loop)**: Controls which ROW you're on (vertical movement)
- **j (inner loop)**: Controls what gets printed in each COLUMN (horizontal movement)
- For each value of i, j runs through its entire cycle (1 to 5)
- i changes slowly (once per row), j changes quickly (5 times per row)

---

## SET 1: Drawing Pattern Exercises

### Exercise 1: Right Triangle (EASY)

**Difficulty:** ⭐ (1/5)

**Pattern:**

```
*
**
***
****
```

**Task:** Use nested loops to create this pattern.

**Hint:** For each row i, print i+1 stars.

**Concepts:** Basic nested loops, simple incremental pattern

---

### Exercise 2: Square (EASY-MEDIUM)

**Difficulty:** ⭐⭐ (2/5)

**Pattern:**

```
*****
*****
*****
*****
*****
```

**Task:** Create a filled square of any size using nested loops.

**Hint:** Both outer and inner loops run the same number of times.

**Concepts:** Nested loops with constant inner loop count

---

### Exercise 3: Isosceles Triangle (MEDIUM)

**Difficulty:** ⭐⭐⭐ (3/5)

**Pattern:**

```
   *
  ***
 *****
*******
```

**Task:** Create a centered triangle with spaces before the stars.

**Hint:** You need to calculate spaces AND stars for each row.

**Concepts:** Multiple nested loops (spaces + stars), centering logic, mathematical relationships

---

### Exercise 4: Hollow Square (MEDIUM-HARD)

**Difficulty:** ⭐⭐⭐⭐ (4/5)

**Pattern:**

```
*****
*   *
*   *
*   *
*****
```

**Task:** Create a square that's hollow inside - only the border is filled.

**Hint:** Use if statements to check if you're on the border or inside.

**Concepts:** Conditional logic within loops, distinguishing between border and interior positions

---

### Exercise 5: Diamond (HARD)

**Difficulty:** ⭐⭐⭐⭐⭐ (5/5)

**Pattern:**

```
   *
  ***
 *****
*******
 *****
  ***
   *
```

**Task:** Create a complete diamond shape that goes up then down.

**Hint:** This is actually two triangles - one growing up, one shrinking down.

**Concepts:** Two separate triangular patterns, complex spacing calculations, reversing pattern logic

---

## SET 2: Array & Sorting Exercises

### Exercise 1: Array Input/Output (EASY)

**Difficulty:** ⭐ (1/5)

**Tasks:**

- Create an array of 5 integers
- Ask user to input values using scanf
- Display all values using printf
- Display array in reverse order

**Example Output:**

```
Enter 5 numbers: 10 20 30 40 50
Array: 10 20 30 40 50
Reverse: 50 40 30 20 10
```

**Concepts:** Array declaration, scanf, printf, basic loops

---

### Exercise 2: Find Maximum/Minimum (EASY-MEDIUM)

**Difficulty:** ⭐⭐ (2/5)

**Tasks:**

- Create array with 10 integers
- Find and display the largest value
- Find and display the smallest value
- Display the index positions of max and min

**Example Output:**

```
Array: 45 12 78 23 56 89 34 67 91 28
Maximum: 91 at index 8
Minimum: 12 at index 1
```

**Concepts:** Array traversal, comparison logic, tracking indices

---

### Exercise 3: Array Sum/Average (MEDIUM)

**Difficulty:** ⭐⭐⭐ (3/5)

**Tasks:**

- Create array of test scores (float)
- Calculate total sum of all scores
- Calculate average score
- Count how many scores are above average
- Count how many scores are below average

**Example Output:**

```
Scores: 85.5 92.0 78.5 96.0 88.0
Sum: 440.0
Average: 88.0
Above average: 2 students
Below average: 1 student
```

**Concepts:** Array processing, mathematical calculations, counting with conditions

---

### Exercise 4: Linear Search (MEDIUM-HARD)

**Difficulty:** ⭐⭐⭐ (3.5/5)

**Tasks:**

- Create array of 15 integers
- Ask user what number to search for
- Search through array to find the number
- Display all positions where the number appears
- Count total occurrences

**Example Output:**

```
Array: 5 3 7 3 9 3 1 8 3 6
Search for: 3
Found at positions: 1, 3, 5, 8
Total occurrences: 4
```

**Concepts:** Array searching algorithms, multiple matches, position tracking

---

### Exercise 5: Bubble Sort (MEDIUM)

**Difficulty:** ⭐⭐⭐ (3/5)

**Tasks:**

- Create array of 10 unsorted integers
- Implement bubble sort algorithm
- Display array after each complete pass
- Count total number of swaps made
- Display final sorted array

**Example Output:**

```
Original: 64 34 25 12 22 11 90 88 76 50

Pass 1: 34 25 12 22 11 64 88 76 50 90
Pass 2: 25 12 22 11 34 64 76 50 88 90
Pass 3: 12 22 11 25 34 64 50 76 88 90
...
Final: 11 12 22 25 34 50 64 76 88 90
Total swaps: 36
```

**Concepts:** Sorting algorithms, nested loops with swapping, algorithm efficiency, step-by-step processing

---

## Summary

**Drawing Exercises:** Focus on pattern creation and nested loop logic
**Array Exercises:** Focus on data storage, manipulation, and algorithms

Start with easier exercises and work your way up to build confidence and understanding!
