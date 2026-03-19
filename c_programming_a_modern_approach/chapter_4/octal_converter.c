/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 20.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 4 - Expressions
*Programming Project: 4
*Program Name: octal_converter
*Purpose: Write a program that reads an integer entered by the
*user and displays it in octal (base 8):
*Enter a number between 0 and 32767: 1953
*In octal, your number is: 03641
*The output should be displayed using five digits, even if
*fewer digits are sufficient. Hint: To convert the number to
*octal, first divide it by 8; the remainder is the last digit
*of the octal number (1, in this case). Then divide the original
*number by 8 and repeat the process to arrive at the next-to-last
*digit. (printf is capable of displaying numbers in base 8,
*as we'll see in Chapter 7. so there's actually an easier
*way to write this program.)
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a number between 0 and 32767: ");
	int user_number = 0;
	scanf("%d", &user_number);

	int d1, d2, d3, d4, d5;
	
	d5 = user_number % 8;
	d4 = (user_number / 8) % 8;
	d3 = ((user_number / 8) / 8) % 8;
	d2 = (((user_number / 8) / 8) / 8) % 8;
	d1 = ((((user_number / 8) / 8) / 8) / 8) % 8;

	printf("%s%d%d%d%d%d\n", "In octal, your number is: ", d1, d2, d3, d4, d5);

	return 0;
}