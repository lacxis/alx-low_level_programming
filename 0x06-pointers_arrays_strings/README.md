# More on Pointer/Arrays and Strings in C Programmin Language

*1. Write a function that concatenates two strings.
	- Prototype: char *_strcat(char *dest, char *src)
	- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
	- Returns a pointer to the resulting string dest

*2. Write a function that concatenates two strings.

*3. Write a function that copies a string.

*4. Write a function that compares two strings.

*5. Write a function that reverses the content of an array of integers.

*6. Write a function that changes all lowercase letters of a string to uppercase.

*7. Write a function that capitalizes all words of a string.

*8. Write a function that encodes a string into 1337.

*9. Write a function that encodes a string using rot13.

*10. Write a function that prints an integer.

*11. Add one line to this code, so that the program prints a[2] = 98, followed by a new line.

*12. Write a function that adds two numbers.
	- Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
	- Where n1 and n2 are the two numbers
	- r is the buffer that the function will use to store the result
	- size_r is the buffer size
	- The function returns a pointer to the result
	- You can assume that you will always get positive numbers, or 0
	- You can assume that there will be only digits in the strings n1 and n2
	- n1 and n2 will never be empty
	- If the result can not be stored in r the function must return 0
