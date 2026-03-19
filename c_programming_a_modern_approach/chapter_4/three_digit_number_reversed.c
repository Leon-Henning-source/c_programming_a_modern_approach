/*
*Author: Leon Henning https://github.com/Leon-Henning-source
*Date: 19.03.2026
*Book: C Programming - A Modern Approach second edition by K. N. King
*Chapter: 4 - Expressions
*Programming Project: 2
*Program Name: two_digit_number_reversed
*Purpose: Extend the program in Programming Project 1 to handle
*three-digit numbers.
*/

#include <stdio.h>

int main(void)
{
	printf("%s", "Enter a three-digit number: ");
	int user_number = 0;
	scanf("%d", &user_number);

	int first_digit_reversed = 0;
	int middle_digit = 0;
	int last_digit_reversed = 0;

	first_digit_reversed = user_number % 10;
	middle_digit = (user_number / 10) % 10;
	last_digit_reversed = user_number / 100;

	printf("%s%d%d%d\n", "The reversal is: ", first_digit_reversed, middle_digit, last_digit_reversed);

	return 0;
}