# String Copy Program in C

This program is a C-based demonstration of copying a string from one memory location to another without using `strcpy`. It allows the user to define the string's size, dynamically allocates memory for it, and then displays the original and copied strings along with their memory addresses.

- Dynamically allocates memory for both the source and destination strings.
- Copies a string from `src` to `dest` using a custom `copyString` function.
- Displays the entered string and its copied version with their memory addresses.
- Includes error handling for memory allocation and input validation.
- **`copyString(char *dest, char *src)`**: Copies each character from `src` to `dest` manually until the end of the string.
- **Error Handling**: Checks if memory allocation is successful; if not, it displays an error and exits the program.
- **Address Display**: Prints memory addresses of `src` and `dest` using `%p` for pointer formatting.
