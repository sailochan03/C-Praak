# Toggle Digits Program in C

This C program takes a string representation of a number from the user and swaps all occurrences of `0` with `1` and `1` with `0`. Other digits are left unchanged. The program handles input as a string to preserve leading zeros and maintain the order of digits.

## How It Works

1. **Input**: The user enters a number (e.g., `0101`).
2. **Character Processing**:
   - The program iterates through each character of the input string.
   - If the character is `0` or `1`, it toggles the digit using the XOR bitwise operator.
3. **Output**: The modified string is printed, showing the swapped digits.
