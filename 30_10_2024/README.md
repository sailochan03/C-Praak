# Student Details Program

This is a simple C program that collects and displays details of a student, including their name, roll number, and marks. The program demonstrates the use of dynamic memory allocation, structures, and basic input/output operations in C.

## Code Structure

The program consists of a `Student` structure, which includes:

- `name` (dynamically allocated string): Stores the student's name.
- `roll` (integer): Stores the student's roll number.
- `marks` (float): Stores the student's marks.

## How It Works

1. The program prompts the user to enter the number of characters in the student's name.
2. Based on this input, it allocates memory dynamically for the name.
3. The user is then prompted to enter the name, roll number, and marks.
4. After collecting the information, the program displays the student's details in a structured format.
5. Finally, the program frees the allocated memory to prevent memory leaks.
